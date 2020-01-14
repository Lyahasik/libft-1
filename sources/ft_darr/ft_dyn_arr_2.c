/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dyn_arr_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:48:37 by mtrisha           #+#    #+#             */
/*   Updated: 2020/01/14 20:05:27 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dyn_arr.h>

#include <libft.h>

void		*darr(t_darr arr, size_t i)
{
	return ((char *)(arr.arr[0]) + i * *arr.item_size);
}

size_t		darr_i(t_darr arr, void *item)
{
	return ((item - *arr.arr) / *arr.item_size);
}

size_t		darr_l(t_darr arr)
{
	return (*arr.curlen);
}

void		*darr_eq(t_darr arr, size_t i, void *data)
{
	ft_memcpy(darr(arr, i), data, *arr.item_size);
	return (darr(arr, i));
}

void		*darr_pop(t_darr arr)
{
	(*arr.curlen)--;
	return (darr(arr, *arr.curlen));
}
