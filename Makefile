NAME := Logger
VERSION := 1.0
COMPILER := g++
STD := c++20
LIBS := -ldate-tz
ARGS := -fcompare-debug-second

FILES := $(shell find ./src/ -type f -name "*.cpp")
FILES += $(shell find ./src/ -type f -name "*.hpp")

BUILD_FILE := build/$(NAME)-$(VERSION);

build:
	mkdir build
	$(COMPILER) $(FILES) -o build/$(NAME)-$(VERSION) -std=$(STD) $(LIBS) $(ARGS)

run:
	chmod 777 $(BUILD_FILE)
	$(BUILD_FILE)

clean:
	rm -rf build

all: clean build run
