/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:17:18 by user              #+#    #+#             */
/*   Updated: 2022/02/26 14:23:14 by pingpanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	i = 0;
	if (n == 0)
		return (s_len);
	if (n <= d_len)
		return (s_len + n);
	while (src[i] && (offset + i) < (n -1))
	{
		dst[offset + i] = src[i];
		i++;
	}
	dst[offset + i] = '\0';
	return (s_len + offset);
}
