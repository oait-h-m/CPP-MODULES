Name= megaphone

src= megaphone.cpp

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $(src)

fclean:
	rm -f $(Name)

re: fclean all

.PHONY: clean fclean re all
