/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:47:36 by pingpanu          #+#    #+#             */
/*   Updated: 2022/03/04 12:34:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
    t_list  * new; //returned t_list
    t_list  * temp; //temporary t_list

    new = NULL;
    if (!lst && !f)
        return (NULL);
    while (lst)
    {
        temp = ft_lstnew((*f)(lst->content));
        if (!temp)
        {
            ft_lstclear(&new, (* del));
            return (NULL);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;
    }
    return (new);
}