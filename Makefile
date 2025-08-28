NAME := Logger
VERSION := 1.0
COMPILER := g++
STD := c++20
ARGS := -ldate-tz -fcompare-debug-second
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
	$(COMPILER) $(C_FILES) $($H_FILES) -o $(OUT)/exec/$(FILE_NAME) -std=$(STD) $(ARGS)


$(OUT)/lib$(FILE_NAME).a:
	mkdir -p $(OUT)/lib/
	$(COMPILER) $(C_FILES) -c
	rm -rf main.o
	ar rvs $(OUT)/lib/lib$(FILE_NAME).a *.o
	rm -rf *.o




run:
	chmod 777 $(OUT)/exec/$(FILE_NAME)
	$(OUT)/exec/$(FILE_NAME)

clean:
	rm -rf $(OUT)

build: $(OUT)/exec/$(FILE_NAME) run

lib: $(OUT)/lib$(FILE_NAME).a
