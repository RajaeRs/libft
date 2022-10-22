/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:45:12 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/21 23:28:19 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *src, int num, size_t len)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)src;
	i = 0;
	while (len)
	{
		*dest = (unsigned char)num;
		dest++;
		len--;
	}
	return (src);
}
