# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 18:46:31 by abidaux           #+#    #+#              #
#    Updated: 2025/09/08 15:30:45 by abidaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Project name
NAME		= phonebook

# Folders
SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= includes

# Sources
SRC_FILES	=	$(SRC_DIR)/phonebook.cpp \
				$(SRC_DIR)/ClassContact.cpp \
				$(SRC_DIR)/ClassPhoneBook.cpp
				$(SRC_DIR)/ClassPhoneBookADD.cpp \
				$(SRC_DIR)/ClassPhoneBookSEARCH.cpp

# Object files
OBJ_FILES	= $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Include headers
INCLUDES	= -I$(INC_DIR)

# Default rule
all: $(NAME)

# Link objects to create the binary
$(NAME): $(OBJ_FILES)
	@echo "Linking $(NAME)..."
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

# Compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Ensure obj/ exists
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean object files
clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ_DIR)

# Clean everything
fclean: clean
	@echo "Removing executable..."
	@rm -f $(NAME)

# Rebuild
re: fclean all

# Avoid make interpreting these names as filenames
.PHONY: all clean fclean re
