/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:50:01 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/21 23:30:07 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	i = 0;
	len_s = ft_strlen(src);
	if (dst == (void *)0 && dstsize == 0)
		return (len_s);
	len_d = ft_strlen(dst);
	if (((len_d >= dstsize)) || dstsize == 0)
		return (len_s + dstsize);
	else
	{
		while ((i + len_d < dstsize - 1) && src[i])
		{
			dst[i + len_d] = src[i];
			i++;
		}
		dst[i + len_d] = '\0';
	}
	return (len_s + len_d);
}
