# Compiler and compiler flags
CXX = clang++
CXXFLAGS = -Wall -std=c++11

# Source files
SRCS = bitm/191.cpp
# Object files (automatically generated from .cpp files)
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = a.out

# Default rule (first target)
all: $(EXEC)
	./$(EXEC)

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

# Rule to build object files from source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up build artifacts
# Rule to clean up build artifacts and unnecessary files
clean:
	find . -name '*.o' -delete
	find . -name '*.out' -delete
	find . -name '*.dSYM' -exec rm -rf {} +
	rm -rf $(EXEC)

# Rule to format the code
lint:
	clang-format -i $(SRCS)
