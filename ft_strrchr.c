/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:17:02 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/21 23:30:47 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!*s && c != '\0')
		return (NULL);
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while ((s[i] >= 0 && i--))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
