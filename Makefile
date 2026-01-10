NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I include -I libft

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR = src
OBJ_DIR = obj

SRCS =	main.c \
		verify_arguments.c \
		reverse_split.c \
		process_list_a.c \
		add_node.c \
		already_ordered.c \
		check_duplicate_numbers.c \
		create_list_a.c \
		define_sorting_method.c \
		destroy_list.c \
		fill_nodes_id.c \
		five_or_less_moveset.c \
		free_split.c \
		ft_atoi_enhanced.c \
		last_node.c \
		push_functions.c \
		radix.c \
		reverse_rotate_functions.c \
		rotate_functions.c \
		stack_size.c \
		swap_functions.c



SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
