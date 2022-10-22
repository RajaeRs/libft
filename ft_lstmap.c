/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:00:12 by rrasezin          #+#    #+#             */
/*   Updated: 2022/10/21 23:27:38 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*result;

	result = NULL;
	while (lst && f)
	{
		tmp = ft_lstnew(f(lst->content));
		ft_lstadd_back (&result, tmp);
		lst = lst ->next;
	}
	(void)del;
	return (result);
}
