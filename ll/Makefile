# Compiler
CXX = clang++
# Compiler flags
CXXFLAGS = -Wall -std=c++11
# Source files
SRC = main.cpp ./utils/lnu.cpp 3217.cpp
# Object files (generated from source files)
OBJ = $(SRC:.cpp=.o)
OBJ_DIR = obj
OBJ_FILES = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

# Executable name
EXEC = my_program

# Default rule to build the executable
all: $(EXEC)

# Rule to link object files and create the executable
$(EXEC): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $(EXEC)

# Rule to compile .cpp files into .o files
$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ_FILES) $(EXEC)
	rmdir -p $(OBJ_DIR)
