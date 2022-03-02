/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:40:45 by user              #+#    #+#             */
/*   Updated: 2022/03/02 13:31:15 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f) (unsigned int, char*))
{
    unsigned int    i;
    
    i = 0;
    if (s || f)
    {
        while (i < (unsigned int)ft_strlen(s))
        {
            f(i, &s[i]);
            i++;
        }
    } 
}