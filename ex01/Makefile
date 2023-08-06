NAME = phonebook

GCC := c++ -Werror -Wextra -Wall  -std=c++98 

SRC := Addcontact.cpp main.cpp Searchcontact.cpp

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all


