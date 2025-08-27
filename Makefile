PROJECT_NAME := LoggerTesting
VER := 1.0

COMP := g++
C_STD := c++20

ifeq ($(DEBUG),false)
	FILE_PATH := ./release
else
	FILE_PATH := ./debug
endif

FILES := $(shell find ./src/ -type f -name '*.c')
FILES += $(shell find ./src/ -type f -name '*.h')
FILES += $(shell find ./src/ -type f -name '*.cpp')
FILES += $(shell find ./src/ -type f -name '*.hpp')

setup:
	mkdir -p src $(FILE_PATH)

build:
	$(COMP) $(FILES) -o $(FILE_PATH)/$(PROJECT_NAME)-$(VER) \
	-std=$(C_STD) -ldate-tz


run:
	chmod 777 $(FILE_PATH)/$(PROJECT_NAME)-$(VER)
	$(FILE_PATH)/$(PROJECT_NAME)-$(VER)

all: setup build run

clean:
	rm -rf debug/
	rm -rf release/