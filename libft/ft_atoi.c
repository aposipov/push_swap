/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:20:38 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/25 16:25:42 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

void	int_max(long number, int sign)
{
	if (number >= (long)2147483648 && sign == -1)
		ft_error();
	if (number >= (long)2147483647 && sign == 1)
		ft_error();
}

void	int_max2(long number, int sign)
{
	if (number > (long)2147483648 && sign == -1)
		ft_error();
	if (number > (long)2147483647 && sign == 1)
		ft_error();
}

int	ft_atoi_2(const char *str, int sign, long number)
{
	while (*str >= '0' && *str <= '9')
	{
		int_max(number, sign);
		number = (number * 10) + (*str - '0');
		str++;
		int_max2(number, sign);
	}
	if (*str == '-' || *str == '+')
		ft_error();
	return (number * sign);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '-' || *str == '\0' || *str == '+')
		ft_error();
	return (ft_atoi_2(str, sign, number));
}
