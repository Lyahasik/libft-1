/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlwordlc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:29:37 by mtrisha           #+#    #+#             */
/*   Updated: 2019/11/26 20:31:55 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_diff_utils.h>

size_t	ft_findlwordlc(char const *s, char c)
{
	size_t	curlen;
	size_t	maxlen;
	int		is_word;

	if (!s)
		return (0);
	is_word = 0;
	curlen = 0;
	maxlen = 0;
	while (*s)
	{
		curlen = (*s != c) ? curlen + 1 : curlen;
		if (is_word && *s == c)
		{
			maxlen = (curlen > maxlen) ? curlen : maxlen;
			is_word = 0;
			curlen = 0;
		}
		if (*s != c && !is_word)
			is_word++;
		s++;
	}
	if (is_word)
		maxlen = (curlen > maxlen) ? curlen : maxlen;
	return (maxlen);
}