/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:50:57 by user              #+#    #+#             */
/*   Updated: 2022/03/02 20:03:16 by user             ###   ########.fr       */
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
    while (*(s + k) && *(s + k) != c)
    {
        k++;
        len++;
    }
    return (len);
}

static char    **ft_error(char **array)
{
    unsigned int    i;

    i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
    return (NULL);
}

char    **ft_split(char const *s, char c)
{
    char    **split; //array of strings for splitted s
    int     words; //no of words in s
    int     i; //pointer to array
    int     k; //pointer to s
    int     len;
    
    words = no_of_words(s,c);
    split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!s|| !split)
        return (NULL);
    k = 0;
    i = -1;
    while (++i < words)
    {
        while (*(s + k) == c)
            k++;
        len = wordlen(s, k, c);
        split[i] = (char *)malloc(sizeof(char) * (len + 1));
        if (!split[i])
            return (ft_error(split));
        ft_strlcpy(split[i], s + k, len + 1);
        k = k + len;
    }
    split[i] = '\0';
    return (split);
}