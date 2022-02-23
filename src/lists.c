

#include "../inc/push_swap.h"

t_test	*ft_lstnew(int num)
{
	t_test	*stack;

	stack = malloc(sizeof(t_test));
	if (!stack)
		return (NULL);
	stack->num = num;
	stack->next = NULL;
	return (stack);
}

void	ft_lstadd_front(t_test **lst, int num)
{
	t_test *front = ft_lstnew(num);
	front->next = *lst;
	*lst = front;
}
