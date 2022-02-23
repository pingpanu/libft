/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:16:11 by user              #+#    #+#             */
/*   Updated: 2022/02/23 11:31:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char   *s1uc;
    unsigned char   *s2uc;

    i = 0;
    s1uc = (unsigned char *)s1;
    s2uc = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (s1uc[i] != s2uc[i])
            return (s1uc[i] - s2uc[i]);
        i++;
    }
    return (0);
}