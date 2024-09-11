# Compiler and compiler flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Source files
SRCS = dp/213.cpp

# Object files (automatically generated from .cpp files)
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = a.out

# Default rule (first target)
default: run

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

# Rule to build object files from source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the executable
run: $(EXEC)
	./$(EXEC)

# Rule to clean up build artifacts
clean:
	rm -f $(OBJS) $(EXEC)

# Rule to format the code
lint: 
	clang-format -i $(SRCS)
