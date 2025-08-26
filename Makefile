PROJECT_NAME := ILoveCompiling

COMP := g++
VER := 1.0

ifeq ($(DEBUG),false)
	FILE_PATH := ./release
else
	FILE_PATH := ./debug
endif

FILES := $(wildcard ./src/*.c)
FILES += $(wildcard ./src/*.h)
FILES += $(wildcard ./src/*.cpp)
FILES += $(wildcard ./src/*.hpp)

setup:
	mkdir -p src $(FILE_PATH)

build:
	$(COMP) $(FILES) -o $(FILE_PATH)/$(PROJECT_NAME)-$(VER)

run:
	chmod 777 $(FILE_PATH)/$(PROJECT_NAME)-$(VER)
	$(FILE_PATH)/$(PROJECT_NAME)-$(VER)

all: setup build run

clean:
	rm -rf debug/
	rm -rf release/