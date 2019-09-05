/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:57:33 by mtrisha           #+#    #+#             */
/*   Updated: 2019/09/05 19:11:38 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char *i;

	i = &s[ft_strlen(s)];
	while (i >= s)
	{
		if (*i == (char)c)
			return ((char *)i);
		i--;
	}
	return (NULL);
}