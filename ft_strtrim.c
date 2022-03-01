/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:46:14 by user              #+#    #+#             */
/*   Updated: 2022/03/01 12:42:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ltrim(const char *s, const char *set) //left trim
{
    size_t  start;

    start = 0;
    while(start < ft_strlen(s) && ft_strchr(set, *(s + start))) //to be replaced by checker
        start++;
    return (start);
}

static size_t   rtrim(const char *s, const char *set, size_t n) //right trim
{
    size_t  end;

    end = ft_strlen(s);
    while(end > n && ft_strchr(set, *(s + end)))
        end--;
    return (end);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    char    *ret;
    size_t     start;
    size_t     end;
 
    if (!s1)
        return (NULL);
    if (!*set)
        return (ft_strdup(s1));
    start = ltrim(s1,set);
    end = rtrim(s1,set,start);
    if (start >= ft_strlen(s1)) //if whole string is equal set
        return (ft_strdup(""));
    ptr = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!ptr)
        return (NULL);
    ret = ptr;
    while (start < end + 1)
        *ptr++ = s1[start++];
    *ptr = '\0';
    return (ret);
}