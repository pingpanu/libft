/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:21:35 by user              #+#    #+#             */
/*   Updated: 2022/02/26 00:37:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1len;
    size_t  s2len;
    char    *join;
    char    *ret;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    if(!(join = malloc(sizeof(char) * (s1len + s2len + 1))))
        return (NULL);
    ret = join;
    while (*s1)
        *join++ = *s1++;
    while (*s2)
        *join++ = *s2++;
    *join = '\0';
    return (ret);
}