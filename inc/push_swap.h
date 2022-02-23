/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:00:26 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/27 18:00:29 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

//typedef struct s_node{
//	int		num;	//?
//	int		index;
//	int		flag;
//	struct s_node	*next;
//	struct s_node	*prev;
//}	t_node;

//typedef struct s_data{
//	t_node	a;
//	t_node	b;
//	int		min_a;
//	int		median;
//	int		length_a;
//	int		length_b;
//	char	**line;
//}	t_data;

typedef struct s_test{
	int	num;
	struct s_test *next;
}	t_test;

typedef struct s_stack{
	int	num;
	struct s_stack *next;
}	t_stack;


void	ft_error(int i);
char	ft_parsing(char	**argv);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *str1, char *str2);
char	**ft_split(char const *s, char c);

t_test	*ft_lstnew(int num);
void	ft_lstadd_front(t_test **lst, int num);

/* instruction */
void	ft_sa(t_stack *head_a);
void	ft_sa(t_stack *head_b);
void	ft_ss(t_stack *head_a, t_stack *head_b);


//sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
//sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
//ss : sa and sb at the same time.

//pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
//pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

//ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
//rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
//rr : ra and rb at the same time.
//rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
//rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
//rrr : rra and rrb at the same time.

#endif
