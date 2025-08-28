NAME := Logger
VERSION := 1.0
COMPILER := g++
STD := c++20
LIBS := -ldate-tz
ARGS := -fcompare-debug-second
SRC := src/
INCLUDE := include/
OUT := out

C_FILES := $(shell find ./src/ -type f -name "*.c")
H_FILES := $(shell find ./src/ -type f -name "*.h")
C_FILES += $(shell find ./src/ -type f -name "*.cpp")
H_FILES += $(shell find ./src/ -type f -name "*.hpp")

FILE_NAME := $(NAME)-$(VERSION)

$(OUT)/exec/$(FILE_NAME):
	mkdir -p $(OUT)/exec/
	$(COMPILER) $(C_FILES) $($H_FILES) -o $(OUT)/exec/$(FILE_NAME) -std=$(STD) $(LIBS) $(ARGS)


$(OUT)/lib$(FILE_NAME).a:
	mkdir -p $(OUT)/lib/




run:
	chmod 777 $(OUT)/exec/$(FILE_NAME)
	$(OUT)/exec/$(FILE_NAME)

clean:
	rm -rf $(OUT)

all: clean $(OUT)/exec/$(FILE_NAME) run
