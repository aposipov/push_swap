/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:46:17 by lchristi          #+#    #+#             */
/*   Updated: 2021/10/26 20:15:59 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*struc;

	struc = malloc(sizeof(t_list));
	if (!struc)
		return (NULL);
	struc->content = content;
	struc->next = NULL;
	return (struc);
}
