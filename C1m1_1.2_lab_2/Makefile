# Variables to make the script easy to update
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = toolkit
SRC = $(shell find . -name "*.cpp")
# Alternatively, use: SRC = main.cpp date/date_utils.cpp random/random_utils.cpp

# The default rule that runs when you just type 'make'
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# A rule to clean up the folder
clean:
	rm -f $(TARGET)

# A rule to build and immediately run
run: all
	./$(TARGET)
