/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spectostr_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:47:30 by mtrisha           #+#    #+#             */
/*   Updated: 2019/09/30 20:54:43 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <spectostr_funcs.h>

#include <double.h>

char	*spectostr_float(t_specifications_def spec, va_list argptr)
{
	char		*output;
	char		tmp[20000];
	int			len;
	int			extralen;
	long double	test;

	test = get_float_item_by_size(argptr, spec.sizes);
	tmp[0] = '\0';
	prf_dblcalc(test, (spec.precision > 19000) ? 19000 : spec.precision, tmp);
	len = ft_strlen(tmp);
	if (spec.flags & FLAG_OCTT && !ft_strchr(tmp, '.')
		&& !ft_strstr(tmp, "inf") && !ft_strstr(tmp, "nan"))
	{
		tmp[len++] = '.';
		tmp[len] = '\0';
	}
	extralen = spec.precision - (tmp + len - ft_strchr(tmp, '.') - 1);
	output = (char *)malloc(len + 1 + (extralen > 0 ? extralen : 0));
	if (!output)
		return (NULL + (errno = ENOMEM) * 0);
	ft_strset(output, '0', len + (extralen > 0 ? extralen : 0));
	ft_memcpy(output, tmp, len + 1);
	output[len] = '0';
	output[len + (extralen > 0 ? extralen : 0)] = '\0';
	return (output);
}