/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:31:18 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:24 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = p;
	while (p->next->next)
		p = p->next;
	*a = p->next;
	p->next = NULL;
	(*a)->next = p1;
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *b;
	p1 = p;
	while (p->next->next)
		p = p->next;
	*b = p->next;
	p->next = NULL;
	(*b)->next = p1;
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = p;
	while (p->next->next)
		p = p->next;
	*a = p->next;
	p->next = NULL;
	(*a)->next = p1;
	p = *b;
	p1 = p;
	while (p->next->next)
		p = p->next;
	*b = p->next;
	p->next = NULL;
	(*b)->next = p1;
	write(1, "rrr\n", 4);
}
