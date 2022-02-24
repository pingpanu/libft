/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:26:05 by user              #+#    #+#             */
/*   Updated: 2022/02/25 00:59:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *copy;
    size_t  slen;

    slen = ft_strlen(s1);
    if(!(copy = malloc(sizeof(char) * (slen + 1))))
        return (NULL);
    while (*s1)
    {
        *copy = *s1;
        copy++;
        s1++;
    }
    *copy = '\0';
    return (copy);
    free(copy); /*where should I put free?*/
} 