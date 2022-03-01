

#include "../inc/push_swap2.h"
#include <stdio.h>

t_test	*ft_lstnew(int num)
{
	t_test	*lst;

	lst = malloc(sizeof(t_test));
	if (!lst)
		return (NULL);
	lst->num = num;
	lst->next = NULL;
	return (lst);
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
	t_test	*tmp = NULL;
	tmp = (t_test*) malloc(sizeof(t_test));

	if (!lst || !num)
		return ;
	if (!*lst)
	{
		*lst = tmp;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = *lst;
	*lst = tmp;
}

int	ft_lstsize(t_test *lst)
{
	int	n;

	n = 0;
	if (!lst)
		return (n);
	while (lst != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}

void	lst_print(t_test *head)
{
	t_test *curr = head;

	while(curr->num != 0)
	{
		printf("%d ", curr->num);
	}

}