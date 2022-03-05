/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:31:55 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:59 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**clean(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	sorted(int counter, t_node **a, t_node **b)
{
	if (counter == 2)
		sort_for_2(a);
	else if (counter == 3)
		sort_for_3(a);
	else if (counter <= 5)
		sort_for_5(a, b, counter);
	else if (counter > 5)
		sort_for_500(a, b, counter);
}

int	main(int argc, char **argv)
{
	int		counter;
	t_node	**p_a;
	t_node	**p_b;
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	p_a = &a;
	p_b = &b;
	if (argc == 1)
		return (0);
	argv_check(argc, argv, p_a);
	reverse(p_a);
	counter = is_sorted(a);
	if (counter == 0)
	{
		cleaning(p_a);
		return (0);
	}
	get_index(&a, counter);
	sorted(counter, p_a, p_b);
	cleaning(p_a);
	return (0);
}
