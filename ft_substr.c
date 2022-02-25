/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:09:47 by user              #+#    #+#             */
/*   Updated: 2022/02/26 00:29:57 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *copy;
    char    *ret;
    size_t  bytes;

    if (!s)
        return (NULL);
    if (start >= (unsigned int)ft_strlen(s))
    {
        len = 0;
        start = 0;
    }
    bytes = len;
    if (len >= ft_strlen(s))
        bytes = (ft_strlen(s) - (size_t)start);
    if(!(copy = malloc(sizeof(char) * (bytes + 1))))
        return (NULL);
    ret = copy;
    while (s[start] && len--)
        *copy++ = s[start++];
    *copy = '\0';
    return (ret);
}