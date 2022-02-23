/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:43:51 by user              #+#    #+#             */
/*   Updated: 2022/02/23 11:31:39 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  n;
    size_t  i;

    i = 0;
    n = ft_strlen(needle);
    while (haystack[i] && i <= len)
    {
        if (!ft_memcmp(haystack++,needle,n))
            return ((char*) (haystack - 1));
        i++;
    }
    return (NULL);
}
/*
int main()
{
    char string[64] = "This is a test string for testing ft_strnstr";
    char *p;

    p = ft_strnstr(string,"test",64);

    if(p)
    {
        printf("String found:\n");
        printf("First occurrence of string \"test\" in \"%s\" is:\n%s\n",string,p);
    }
    else
        printf("String not found!\n");
    return (0);
}*/