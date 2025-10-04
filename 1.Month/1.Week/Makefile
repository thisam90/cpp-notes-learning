# Define the C++ compiler

CXX = clang++

# Define compiler flags
# -std=c++17: Use C++17 standard
# -Wall: Enable all common warnings
# -Wextra: Enable extra warnings
# -g: Include debugging information
CXXFLAGS = -std=c++20 -Wall -Wextra -g

# Define the name of the executable
TARGET = my_program

# Define source files
# SRCS = main.cpp file1.cpp file2.cpp
# Change here the .cpp file you want to compile, you can use multiple
SRCS = day4.cpp
# Automatically generate object file names from source files
OBJS = $(SRCS:.cpp=.o)

# Default target: builds the executable
all: $(TARGET)

# Rule to link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Pattern rule to compile C++ source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target: removes object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)
# Run target: build and run the program
run: $(TARGET)
	./$(TARGET)
