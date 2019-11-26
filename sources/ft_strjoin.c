/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:49:48 by mtrisha           #+#    #+#             */
/*   Updated: 2019/11/26 20:27:30 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_diff_utils.h>

#include <ft_libc.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 + len2 > __SIZE_MAX__ - 1)
		return (NULL);
	str = ft_strnew(len1 + len2);
	if (!str)
		return (NULL);
	ft_memcpy((void *)str, s1, ft_strlen(s1));
	ft_memcpy((void *)&(str[ft_strlen(s1)]), s2, ft_strlen(s2));
	return (str);
}
