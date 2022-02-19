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

typedef struct s_node{
	int		num;	//?
	int		index;
	int		flag;
	char	*next;	//?
	char	*prev;	//?
}	t_node;

typedef struct s_data{
	t_node	stqck_a;
	t_node	stack_b;
	int		min_a;
	int		median;
	int		length_a;
	int		length_b;
	char	**line;
}	t_data;

void	ft_error(void);
char	ft_parsing(char	**argv);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *str1, char *str2);
char	**ft_split(char const *s, char c);

#endif
