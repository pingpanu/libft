/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:20:42 by user              #+#    #+#             */
/*   Updated: 2022/02/22 16:11:06 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (ft_strlen(src));
    while (src[i] && i < (n - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}