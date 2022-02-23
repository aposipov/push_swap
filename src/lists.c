

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

t_test	*ft_lstlast(t_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_test **lst, int num)
{
	t_test	*tmp;

	if (!lst || !num)
		return ;
	if (!*lst)
	{
		*lst = num;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new; //
}

