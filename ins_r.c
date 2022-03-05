/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:31:08 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:31:13 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = *a;
	*a = (*a)->next;
	while (p->next)
		p = p->next;
	p->next = p1;
	p->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *b;
	p1 = *b;
	*b = (*b)->next;
	while (p->next)
		p = p->next;
	p->next = p1;
	p->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	t_node	*p;
	t_node	*p1;

	p = *a;
	p1 = *a;
	*a = (*a)->next;
	while (p->next)
		p = p->next;
	p->next = p1;
	p->next->next = NULL;
	p = *b;
	p1 = *b;
	*b = (*b)->next;
	while (p->next)
		p = p->next;
	p->next = p1;
	p->next->next = NULL;
	write(1, "rr\n", 3);
}
