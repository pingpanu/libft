/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:52:14 by user              #+#    #+#             */
/*   Updated: 2022/02/26 13:57:55 by pingpanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	char	*uc_s;
	char	find;
	size_t	i;

	i = 0;
	uc_s = (char *)s;
	find = (unsigned char)c;
	while (i < len)
	{
		if (uc_s[i] == find)
			return (uc_s + i);
		i++;
	}
	return (NULL);
}
