/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:32:25 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:32:29 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **a, int num)
{
	t_node	*p;

	if (!a)
		return ;
	p = malloc(sizeof(t_node));
	if (!p)
		return ;
	p->number = num;
	p->next = *a;
	*a = p;
}

void	reverse(t_node **a)
{
	t_node	*curr;
	t_node	*next;
	t_node	*prev;

	next = NULL;
	prev = NULL;
	if (*a == NULL)
		return ;
	curr = *a;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*a = prev;
}

int	is_sorted(t_node *a)
{
	int	counter;
	int	sorted;

	counter = 1;
	sorted = 0;
	while (a != NULL && a -> next != NULL)
	{
		if ((a -> number) >= (a -> next -> number))
			sorted = 1;
		a = a -> next;
		counter++;
	}
	if (sorted == 0)
		return (0);
	else
		return (counter);
}

void	cleaning(t_node **node)
{
	t_node	*p;
	t_node	*p1;

	p = *node;
	while (p != NULL)
	{
		p1 = p->next;
		free (p);
		p = p1;
	}
	*node = NULL;
}
