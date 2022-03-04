/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 00:03:51 by pingpanu          #+#    #+#             */
/*   Updated: 2022/03/04 12:58:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (lst && new)
    {
        if (*lst == NULL)
        {
            *lst = new;
            return ;
        }
        tmp = ft_lstlast(*lst);
        tmp->next = new;
    }
}