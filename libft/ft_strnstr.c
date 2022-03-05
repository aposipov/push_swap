/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:16:20 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/26 19:07:28 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t	index1;
	size_t	index2;

	if (!*small)
		return ((char *)large);
	index2 = 0;
	while (large[index2])
	{
		index1 = 0;
		while (large[index2 + index1] == small[index1] && index2 + index1 < len)
			if (!small[++index1])
				return ((char *)(large + index2));
		index2++;
	}
	return (0);
}
