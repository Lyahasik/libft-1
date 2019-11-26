/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_handle_stars.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 23:11:25 by mtrisha           #+#    #+#             */
/*   Updated: 2019/11/26 20:40:30 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRF_HANDLE_STARS_H
# define PRF_HANDLE_STARS_H

# include <prf_printf_spec.h>

# include <stdarg.h>

void	handle_stars(t_specifications_def *spec, va_list argptr,
													int g_arg_mode);

#endif
