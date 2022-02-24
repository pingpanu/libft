/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:43:51 by user              #+#    #+#             */
/*   Updated: 2022/02/24 11:52:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  n;

    n = ft_strlen(needle);
    if (n == 0)
        return ((char*)haystack);
    while (*haystack && n <= len--)
    {
        if(!ft_memcmp(haystack,needle,n))
            return((char*)haystack);
        haystack++;
    }
    return (NULL);
}