/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:03:51 by user              #+#    #+#             */
/*   Updated: 2022/02/22 14:07:44 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int         res;
    int         pos;
    size_t  i;

    res = 0;
    pos = 1;
    i = 0;
    while (str[i] >= 9 && str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        pos = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && ft_isdigit(str[i]))
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * pos);
}