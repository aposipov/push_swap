/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:32:18 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:32:22 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_array(t_node *b, int *num)
{
	int	d;

	if (!b || !num)
		return (0);
	d = 0;
	while (b)
	{
		num[d] = b->index;
		b = b->next;
		d++;
	}
	return (*num);
}

int	min_i(t_node **a)
{
	int		i;
	t_node	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i > p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}

int	max_i(t_node **a)
{
	int		i;
	t_node	*p;

	i = 0;
	p = *a;
	i = p->index;
	while (p != NULL)
	{
		if (i < p->index)
			i = p->index;
		p = p->next;
	}
	return (i);
}

int	find_mediane(t_node **b, int med, int counter)
{
	int		z;
	int		*num;

	num = malloc(sizeof(int) * (counter + 1));
	if (!num)
		return (0);
	*num = index_array(*b, num);
	z = counter;
	while (num[counter] != med)
		counter--;
	z = z - counter;
	counter = 0;
	while (num[counter] != med)
		counter++;
	free(num);
	if (z < counter)
		return (1);
	return (0);
}

int	count_numbers(t_node **a)
{
	t_node	*p;
	int		i;

	i = 0;
	p = *a;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
