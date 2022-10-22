/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:58:03 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/08 13:19:14 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)s;
	while ((dest != (void *)0 && n > 0)
		|| (n != 0 && dest == (void *)0 && n != 0))
	{
		if (*dest == (char)c)
			return (dest + i);
		dest++;
		n--;
	}
	return (NULL);
}
