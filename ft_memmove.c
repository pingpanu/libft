/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 23:01:14 by user              #+#    #+#             */
/*   Updated: 2022/02/25 00:39:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *uc_dst;
    char    *uc_src;
    char    temp[len];
    size_t  i;

    if (!dst)
        return (NULL);
    uc_dst = (char *)dst;
    uc_src = (char *)src;
    i = 0;
    while (i < len)
    {
        temp[i] = uc_src[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        uc_dst[i] = temp[i];
        i++;
    }
    return (uc_dst);
}