/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:43:04 by mtrisha           #+#    #+#             */
/*   Updated: 2019/11/26 19:30:24 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_memory_manager.h>

#include <ft_libft_mod.h>

#ifdef USE_LIBC

inline void	*ft_remalloc(void *ptr, size_t oldsize, size_t newsize)
{
	return (ft_memman_remalloc(ptr, newsize + oldsize * 0));
}

#else

void		*ft_remalloc(void *ptr, size_t oldsize, size_t newsize)
{
	void *newptr;

	if (newsize == oldsize)
		return (ptr);
	if (!(newptr = ft_memalloc(newsize)))
	{
		if (ptr)
			ft_free(ptr);
		return (NULL);
	}
	if (ptr)
	{
		ft_memcpy(newptr, ptr, (oldsize < newsize) ? oldsize : newsize);
		ft_free(ptr);
	}
	return (newptr);
}

#endif
