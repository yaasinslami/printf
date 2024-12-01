
CC          = cc
AR          = ar rcs
RM          = rm -rf
CFLAGS      = -Wall -Wextra -Werror
CP          = cp
MAKE        = make

LIBFT_DIR   = ./Libft
SRC_DIR     = ./srcs
BONUS_DIR   = ./srcs_bonus
INC_DIR     = include
OBJ_DIR     = obj
BONUS_OBJ_DIR = obj_bonus

NAME        = libftprintf.a
LIBFT       = $(LIBFT_DIR)/libft.a

HEADER     = $(INC_DIR)/ft_printf.h
BONUS_HEADER = $(INC_DIR)/ft_printf_bonus.h

SRCS        = ft_printf.c ft_print_hexadec.c ft_print_funcs.c

BONUS_SRCS  = ft_flag_utils_bonus.c ft_parse_bonus.c ft_printf_bonus.c \
               ft_flags_bonus.c ft_print_char_s_bonus.c ft_print_di_bonus.c \
               ft_print_u_bonus.c ft_print_hex_bonus.c

OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)
BONUS_OBJS  = $(BONUS_SRCS:%.c=$(BONUS_OBJ_DIR)/%.o)

INC_FLAGS   = -I$(INC_DIR) -I$(LIBFT_DIR)

all: makedirs $(NAME)

makedirs:
	@mkdir -p $(OBJ_DIR)
makedirs_bonus:
	@mkdir -p $(BONUS_OBJ_DIR)

$(NAME): $(LIBFT) $(OBJS)
	$(CP) $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

bonus: makedirs_bonus $(LIBFT) $(BONUS_OBJS)
	$(CP) $(LIBFT) $(NAME)
	$(AR) $(NAME) $(BONUS_OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(BONUS_OBJ_DIR)/%.o: $(BONUS_DIR)/%.c $(BONUS_HEADER)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR) $(BONUS_OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

re_bonus: fclean bonus

.PHONY: clean makedirs makedirs_bonus
