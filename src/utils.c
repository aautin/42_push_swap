/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aautin <aautin@student.42.fr >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:59:33 by aautin            #+#    #+#             */
/*   Updated: 2023/12/05 15:37:12 by aautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_printlst(t_list *lst)
{
	while (lst)
	{
		ft_printf("[%d]-->", lst->value);
		lst = lst->next;
	}
	ft_printf("NULL\n");
}

void	ft_lstsclear(t_list **lst_a, t_list **lst_b)
{
	ft_lstclear(lst_a);
	ft_lstclear(lst_b);
}

void	ft_printlsts(t_list	*lst_a, t_list *lst_b)
{
	ft_printf("\n");
	ft_printlst(lst_a);
	ft_printlst(lst_b);
	ft_printf("\n");
}

long int	ft_atol(char *str)
{
	int			i;
	long int	nb;
	char		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return (nb * sign);
}

int	ft_free_dbtab(char **str, int i)
{
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (1);
}
