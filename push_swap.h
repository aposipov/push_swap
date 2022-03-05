/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:32:02 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:32:07 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				number;
	int				index;
	struct s_node	*next;
}	t_node;

void	push(t_node **node, int data);
//void	print_push(t_node *node);
void	reverse(t_node **a);
int		is_sorted(t_node *a);
void	cleaning(t_node **node);

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

void	ft_error(void);

//size_t	strccount(char const *s, char c);
char	**clean(char **s);
//size_t	strclen(char *s, char c);
//size_t	findstart(char const *s, char c);

int		check_doubles(t_node *node, int data);
void	atoi_string(char *string, t_node **a);
int		argv_split(int argc, char **argv, int j, t_node **a);
int		argv_check(int argc, char **argv, t_node **a);

void	sorted(int counter, t_node **a, t_node **b);

void	sort_for_pa(t_node **a, t_node **b);
void	sort_for_2(t_node **a);
void	sort_for_3(t_node **a);
void	sort_for_5(t_node **a, t_node **b, int j);
void	sort_for_500(t_node **a, t_node **b, int j);

int		do_number_massive(t_node *b, int *num);
int		bubl_sort_arr(int *num, int size);
int		do_int_arr(int *num, int *num1, int size);
int		index_chr(int *num, int num2);
void	get_index(t_node **a, int count);

int		index_array(t_node *b, int *num);
int		min_i(t_node **a);
int		max_i(t_node **a);
int		find_mediane(t_node **b, int med, int counter);
int		count_numbers(t_node **a);

#endif
