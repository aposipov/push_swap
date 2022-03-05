/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:32:10 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:32:15 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_pa(t_node **a, t_node **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != max_i(b) && \
		!find_mediane(b, max_i(b), count_numbers(b)))
			rb(b);
		else if ((*b)->index != max_i(b) && \
		find_mediane(b, max_i(b), count_numbers(b)))
			rrb(b);
		else if ((*b)->index == max_i(b))
			pa(a, b);
	}
}

void	sort_for_2(t_node **a)
{
	if ((*a)->next->index < (*a)->index)
		sa(a);
}

void	sort_for_3(t_node **a)
{
	if ((*a)->index == max_i(a))
		ra(a);
	if ((*a)->index == min_i(a) && (*a)->next->index == max_i(a))
	{
		rra(a);
		sa(a);
	}
	if ((*a)->index != min_i(a) && (*a)->index > (*a)->next->index)
		sa(a);
	if ((*a)->index != min_i(a) && (*a)->index < (*a)->next->index)
		rra(a);
}

void	sort_for_5(t_node **a, t_node **b, int j)
{
	int	i;

	i = 0;
	while (i < j - 2)
	{
		if ((*a)->index > min_i(a) && \
		!find_mediane(a, min_i(a), count_numbers(a)))
			ra(a);
		else if ((*a)->index > min_i(a) \
		&& find_mediane(a, min_i(a), count_numbers(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_i(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sort_for_500(t_node **a, t_node **b, int j)
{
	int	l;

	l = 0;
	if (j >= 100)
		j = 30;
	else
		j = 15;
	while ((*a) != NULL)
	{
		if (l > 1 && (*a)->index <= l)
		{
			pb(a, b);
			l++;
			rb(b);
		}
		else if ((*a)->index <= l + j)
		{
			pb(a, b);
			l++;
		}
		else if ((*a)->index >= l)
			ra(a);
	}
	sort_for_pa(a, b);
}
