/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 18:00:41 by lchristi          #+#    #+#             */
/*   Updated: 2021/12/25 18:00:44 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_data	*vars;
	char **line = NULL;

	vars = malloc(sizeof(t_data));
	if (!vars)
		return (0);
	if (argc == 1)
		ft_error();
	if (argc == 2)
		vars->line = ft_split(argv[1], ' ');

//	if (argc > 2);
//		ft_parsing();
	while(*line != NULL)
	{
		printf("line = %s\n", vars->line);
		vars->line++;
	}


	return(0);
}
