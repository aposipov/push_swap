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

	char **str = NULL;
	int i = 1;
	int j = 0;
	int	test;
	t_test *stack_a = NULL;
	stack_a = malloc(sizeof(t_test));


//	if (!str)
//		return NULL;
	if (argc == 1)
		ft_error(1); //
	if (argc == 2)
	{

		str = ft_split(argv[i], ' ');
		i = 0;
		while (str[i] != NULL)
		{
//			test = malloc(sizeof(int *));
			test = ft_atoi(str[i]);
			ft_lstadd_front(&stack_a, test);
			//printf("test %d\n", test[i]);
			printf("line==2 %d\n", ft_atoi(str[i]));
			i++;

		}
	}
	if (argc > 2)
	{
		while (i < argc)
		{

			str = ft_split(argv[i], ' ');
			//test = malloc(sizeof(int));
			test = ft_atoi(str[0]);
			//printf("line>2 %d\n", ft_atoi(str[0]));
			printf("line>2 %d\n", test);
			i++;
			j++;
		}
	}

	printf("list %d\n", stack_a->num);
	printf("list %d\n", stack_a->next->num);
	printf("list %d\n", stack_a->next->next->num);
//	while(stack_a->next != NULL)
//	{
//		printf("list %d\n", stack_a->num);
//		stack_a = stack_a->next;
//	}

	return(0);
}
