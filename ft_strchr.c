/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:09:24 by user              #+#    #+#             */
/*   Updated: 2022/02/22 14:46:33 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;
    size_t  slen;

    i = 0;
    slen = ft_strlen(s);
    if (c < 31)
        return ((char *)s + slen);
    else if (c > 126)
        return ((char *)s);
    else
    {
        while (s[i] != c)
        {
            if (i == slen)
                return (NULL);
            i++;
        }
        return ((char *)s + i);
    }
}