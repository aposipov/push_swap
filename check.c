/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:31:47 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:51 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(t_node *node, int data)
{
	while (node != NULL)
	{
		if (node -> number == data)
			return (1);
		node = node -> next;
	}
	return (0);
}

void	atoi_string(char *string, t_node **a)
{
	int	i;

	i = 0;
	if (string == NULL)
		return ;
	while (string[i])
	{
		if (!ft_isdigit(string[i]) && string[i] != '+' && string[i] != '-')
			ft_error();
		i++;
	}
	if (check_doubles(*a, ft_atoi(string)) == 0)
		push(a, ft_atoi(string));
	else
		ft_error();
}

int	argv_split(int argc, char **argv, int j, t_node **a)
{
	int		i;
	char	**strings;

	if (j < argc && ft_strlen(argv[j]) == 0)
		ft_error();
	strings = ft_split(argv[j], ' ');
	if (strings == NULL)
		return (0);
	i = 0;
	while (strings[i])
	{
		atoi_string(strings[i], a);
		i++;
	}
	clean(strings);
	return (0);
}

int	argv_check(int argc, char **argv, t_node **a)
{
	int	number;
	int	j;

	j = 1;
	while (j <= argc)
	{
		number = argv_split(argc, argv, j, a);
		j++;
	}
	return (number);
}
