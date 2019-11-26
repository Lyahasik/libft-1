/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:36:56 by mtrisha           #+#    #+#             */
/*   Updated: 2019/11/26 20:19:50 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_diff_utils.h>

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
	return ;
}
