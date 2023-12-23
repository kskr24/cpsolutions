CXX := /usr/bin/g++
SRC_DIR := ./src
BIN_DIR := ./bin

all: $(SRC_DIR)/temp.cpp
	$(CXX) $(SRC_DIR)/temp.cpp -o $(BIN_DIR)/temp
