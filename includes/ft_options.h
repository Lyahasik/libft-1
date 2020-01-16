/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kashnitskiy <elijahkash.code@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:58:10 by mtrisha           #+#    #+#             */
/*   Updated: 2020/01/16 13:54:26 by Kashnitskiy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPTIONS_H
# define FT_OPTIONS_H

typedef unsigned long long int	t_options;

int								ft_is_option(const char *line);
char							ft_check_opt(char *line, char *base);
t_options						ft_get_options(const char *line);
t_options						ft_get_opt_bit(const char c);

#endif
