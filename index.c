/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:30:10 by lchristi          #+#    #+#             */
/*   Updated: 2022/03/03 17:30:52 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_number_massive(t_node *b, int *num)
{
	int	d;

	if (!b || !num)
		return (0);
	d = 0;
	while (b)
	{
		num[d] = b->number;
		b = b->next;
		d++;
	}
	return (*num);
}

int	bubl_sort_arr(int *num, int size)
{
	int			j;
	int			i;
	int			temp;

	if (!num || !size)
		return (0);
	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (num[j - 1] > num[j])
			{
				temp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = temp;
			}
			j--;
		}
		i++;
	}
	return (*num);
}

int	do_int_arr(int *num, int *num1, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		num1[i] = num[i];
		i++;
	}
	return (*num1);
}

int	index_chr(int *num, int num2)
{
	int	i;

	i = 0;
	while (num[i] != num2)
		i++;
	return (i);
}

void	get_index(t_node **a, int count)
{
	t_node		*b;
	t_node		*z;
	int			l;
	int			*num;
	int			*num1;

	l = 0;
	b = *a;
	z = b;
	num = malloc(sizeof(int) * (count + 1));
	num1 = malloc(sizeof(int) * (count + 1));
	if (!num || !num1)
		return ;
	*num = do_number_massive(b, num);
	*num1 = do_int_arr(num, num1, count);
	*num = bubl_sort_arr(num, count);
	while (z != NULL)
	{
		z->index = index_chr(num, num1[l]);
		z = z->next;
		l++;
	}
	free(num);
	free(num1);
}
