/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:50:57 by user              #+#    #+#             */
/*   Updated: 2022/03/02 17:20:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int   no_of_words(const char *s, char c)
{
    int  count;

    count = 0;
    while(*s)
    {
        while(*s && *s == c) //to move string pass c
            s++;
        if (*s && *s != c)
        {
            count++;
            while (*s && *s != c) //to move string rightward
                s++;
        }
    }
    return (count);
}

static int  wordlen(const char *s, size_t k, char c)
{
    int len;

    len = 0;
    while (*(s + k) != c)
    {
        k++;
        len++;
    }
    return (len);
}

char    **ft_split(char const *s, char c)
{
    char    **split; //array of strings for splitted s
    int     words; //no of words in s
    int     i; //pointer to array
    int     k; //pointer to s
    int     len; //split[i] length

    if (!s)
        return (NULL);
    words = no_of_words(s,c);
    split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!split)
        return (NULL);
    k = 0;
    i = 0;
    while (i < words)
    {
        while (*(s + k) == c)
            k++;
        if (*(s + k) != c)
        {
            len = wordlen(s, k, c);
            split[i] = (char *)malloc(sizeof(char) * (len + 1));
            /*if (!split)
                return (ft_error);*/
            ft_strlcpy(split[i], s + k, len);
            k = k + len;
        }
        i++;
    }
    split[i] = '\0';
    return (split);
}