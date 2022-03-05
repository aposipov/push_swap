/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_s_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:31:28 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:33 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = p->next->next;
	*a = (*a)->next;
	(*a)->next = p;
	(*a)->next->next = p1;
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *b;
	p1 = p->next->next;
	*b = (*b)->next;
	(*b)->next = p;
	(*b)->next->next = p1;
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = p->next->next;
	*a = (*a)->next;
	(*a)->next = p;
	(*a)->next->next = p1;
	p = *b;
	p1 = p->next->next;
	*b = (*b)->next;
	(*b)->next = p;
	(*b)->next->next = p1;
	write(1, "ss\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*p;

	if (!b)
		return ;
	p = *b;
	*b = p -> next;
	p -> next = *a;
	*a = p;
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	t_node	*p;

	if (!a)
		return ;
	p = *a;
	*a = p -> next;
	p -> next = *b;
	*b = p;
	write(1, "pb\n", 3);
}
