/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:23:37 by mtrisha           #+#    #+#             */
/*   Updated: 2019/09/06 12:31:11 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*nlist;
	t_list		*nitem;
	t_list		*last;

	while (lst)
	{
		nitem = ft_lstnew(f(lst), sizeof(t_list *));
		if (!nlist)
		{
			nlist = nitem;
			last = nitem;
		}
		else
		{
			last->next = nitem;
			last = nitem;
		}
		lst = lst->next;
	}
	return (nlist);
}
