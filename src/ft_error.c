/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erorr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:39:59 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/19 16:40:02 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(int i)
{
	if (i == 1)
		write(1, "Error\n", 6);
	if (i == 2)
		write(1, "Error test\n", 15);
}
