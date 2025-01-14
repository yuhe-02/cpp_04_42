CPP = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

PROGRAM_NAME = materia

SRC_DIR := src
CLASS_DIR := class
INTERFACE_DIR := interface
IMPLEMENT_DIR := implement

SRC_PATH = ./$(SRC_DIR)
CLASS_PATH := $(SRC_PATH)/$(CLASS_DIR)
INTERFACE_PATH := $(CLASS_PATH)/$(INTERFACE_DIR)
IMPLEMENT_PATH := $(CLASS_PATH)/$(IMPLEMENT_DIR)

INC_DIR := ./includes

# 適宜更新する
SRC := $(wildcard $(SRC_PATH)/*.cpp) \
       $(wildcard $(CLASS_PATH)/*.cpp) \
       $(wildcard $(INTERFACE_PATH)/*.cpp) \
       $(wildcard $(IMPLEMENT_PATH)/*.cpp)

# 適宜更新する
INCLUDES := -I$(INC_DIR)/$(INTERFACE_DIR) \
			-I$(INC_DIR)/$(IMPLEMENT_DIR)

OBJ_DIR := objs
OBJS := $(patsubst $(SRC_PATH)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_PATH)/%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re
