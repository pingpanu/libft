/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:12:08 by user              #+#    #+#             */
/*   Updated: 2022/02/22 14:57:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);
    if (c < 31)
        return ((char *)s + i);
    else if (c > 126)
        return ((char *)s);
    else
    {
        while (s[i] != c)
        {
            if (i == 0)
                return (NULL);
            i--;
        }
        return ((char *)s + i);
    }
}