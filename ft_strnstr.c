/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:43:51 by user              #+#    #+#             */
/*   Updated: 2022/02/24 02:04:03 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  n;
    size_t  i;

    n = ft_strlen(needle);
    if (n == 0)
        return ((char*)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        if (!ft_strncmp(&haystack[i], needle, n))
            return ((char*) (haystack + i));
        i++;
    }
    return (NULL);
}
/*
int main()
{
    char    haystack[30] = "aaabcabcd";
    char    *p1;
    char    *p2;
    p1 = strnstr(haystack,"cd",8);
    p2 = ft_strnstr(haystack,"cd",8);

    printf("strnstr result = %s\n",p1);
    printf("ft_strnstr result = %s\n",p2);
    return (0);
}*/