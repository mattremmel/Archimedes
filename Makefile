#
# Makefile
# Archimedes
#
# Created by Matthew Remmel on 8/2/16.
# Copyright (c) 2015 Matthew Remmel. All rights reserved.
#

# Compiler
CC := g++
CFLAGS := -g -std=c++11 -Wall


# Project
TARGET := bin/archimedes
TEST_TARGET := bin/archimedes_tests
BUILD_DIR := build/src
TEST_BUILD_DIR := build/test


# Header
HEADER_ROOT := include
HEADER_DIRS := $(shell find $(HEADER_ROOT) -type d)
INCLUDE := $(HEADER_DIRS:%=-I%)


# Source
SOURCE_DIR := src
SOURCE_EXT := cpp
SOURCE_MAIN := $(SOURCE_DIR)/main.$(SOURCE_EXT)
SOURCES := $(shell find $(SOURCE_DIR) -type f -name *.$(SOURCE_EXT) | grep -v $(SOURCE_MAIN))
OBJECTS := $(patsubst $(SOURCE_DIR)/%,$(BUILD_DIR)/%,$(SOURCES:.$(SOURCE_EXT)=.o))


# Project Tests
TEST_ROOT := test
TEST_EXT := cpp
TESTS := $(shell find $(TEST_ROOT) -type f -name *.$(TEST_EXT))
TEST_OBJECTS := $(patsubst $(TEST_ROOT)/%,$(TEST_BUILD_DIR)/%,$(TESTS:.$(TEST_EXT)=.o))


# Testing Framework
TEST_FRAM_MAIN := lib/googletest-1.7.0/gtest_main.cc
TEST_FRAM_HEADER := lib/googletest-1.7.0
TEST_FRAM_SOURCE := lib/googletest-1.7.0/gtest-all.cc
TEST_INCLUDE := -I$(TEST_FRAM_HEADER)


# Make Targets

build: $(OBJECTS)
	@echo " Linking..."
	@mkdir -p `dirname $(TARGET)`
	@echo " $(CC) $(CFLAGS) -I$(INCLUDE) $^ $(SOURCE_MAIN) -o $(TARGET)"
	@$(CC) $(CFLAGS) -I$(INCLUDE) $^ $(SOURCE_MAIN) -o $(TARGET)

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.$(SOURCE_EXT)
	@echo " Building $^..."
	@mkdir -p `dirname $@`
#	@echo " $(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<"
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

rebuild: cleanest build

test: $(OBJECTS) $(TEST_OBJECTS)
	@echo " Linking..."
	@mkdir -p `dirname $(TEST_TARGET)`
	@echo " $(CC) $^ $(TEST_FRAM_SOURCE) $(TEST_FRAM_MAIN) -o $(TEST_TARGET)"
	@$(CC) $^ $(TEST_FRAM_SOURCE) $(TEST_FRAM_MAIN) -o $(TEST_TARGET)
	@./$(TEST_TARGET)
	
$(TEST_BUILD_DIR)/%.o: $(TEST_ROOT)/%.$(TEST_EXT)
	@echo " Building $^..."
	@mkdir -p `dirname $@`
#	@echo " $(CC) $(CFLAGS) $(INCLUDE) $(TEST_INCLUDE) -c -o $@ $<"
	@$(CC) $(CFLAGS) $(INCLUDE) $(TEST_INCLUDE) -c -o $@ $<
	
clean:
	@echo " Cleaning build files..." 
	@rm -r build/*
	
cleanest:
	@echo " Cleaning build files and executables..."
	@rm -r bin/*
	@rm -r build/*

.PHONY: clean