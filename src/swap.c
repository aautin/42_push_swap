/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 23:39:43 by aautin            #+#    #+#             */
/*   Updated: 2023/12/02 15:44:43 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void static	swap(t_list *a, t_list *b)
{
	t_list	*temp;

	temp = ft_lstnew(a->value);
	a->value = b->value;
	b->value = temp->value;
	free(temp);
}

int	swap_a(t_list *lst)
{
	if (ft_lstsize(lst) > 1)
	{
		while (lst->next->next)
			lst = lst->next;
		swap(lst, lst->next);
		ft_printf("sa\n");
		return (1);
	}
	return (0);
}

int	swap_b(t_list *lst)
{
	if (ft_lstsize(lst) > 1)
	{
		while (lst->next->next)
			lst = lst->next;
		swap(lst, lst->next);
		ft_printf("%s\n");
		return (1);
	}
	return (0);
}

int	swap_s(t_list *lst_a, t_list *lst_b)
{
	int	moves;
	
	moves = 0;
	if (ft_lstsize(lst_a) > 1)
	{
		while (lst_a->next->next)
			lst_a = lst_a->next;
		swap(lst_a, lst_a->next);
		moves++;
	}
	if (ft_lstsize(lst_b) > 1)
	{
		while (lst_b->next->next)
			lst_b = lst_b->next;
		swap(lst_b, lst_b->next);
		moves++;
	}
	ft_printf("ss\n");
	return (moves);
}