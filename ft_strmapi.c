/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:31:36 by user              #+#    #+#             */
/*   Updated: 2022/03/02 12:51:19 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    unsigned int    len; //to receive ft_strlen
    char            *result;

    i = 0;
    if (!s || !f)
        return (NULL);
    len = (unsigned int)ft_strlen(s);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    while (i < len)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}