/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:28:25 by pingpanu          #+#    #+#             */
/*   Updated: 2022/03/04 13:07:31 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (lst && del)
    {
        t_list  * prev;

        prev = *lst;
        while (*lst)
        {
            *lst = (*lst)->next;
            del(prev->content);
            free(prev);
            prev = *lst;
        }
        *lst = 0;
    }
}