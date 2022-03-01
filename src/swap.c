

#include "../inc/push_swap2.h"

void	ft_sa(t_stack *head_a)
{
	int	tmp;

	if( head_a != NULL)
	{
		tmp = head_a->num;
		head_a->num = head_a->next->num;
		head_a->next->num = tmp;
	}
}

void	ft_sb(t_stack *head_b)
{
	int	tmp;

	if( head_b != NULL)
	{
		tmp = head_b->num;
		head_b->num = head_b->next->num;
		head_b->next->num = tmp;
	}
}

void	ft_ss(t_stack *head_a, t_stack *head_b)
{
	ft_sa(head_a);
	ft_sb(head_b);
}
