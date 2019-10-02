/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bn_outp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:31:16 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/10/02 17:13:55 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <prf_double.h>

static void		reformat_checkzero(char *output, int prec, char *c)
{
	while (prec-- >= 0 && *c != '\0')
		c++;
	if (*c != '\0')
		*c = '\0';
	else
	{
		prec++;
		while (prec-- >= 0)
			ft_strcat(output, "0");
	}
}

void			reformat_output(char *output, int prec)
{
	char *c;

	c = ft_strchr(output, '.');
	if (prec == 0)
	{
		if (c != NULL)
			*c = '\0';
		return ;
	}
	if (c != NULL)
		reformat_checkzero(output, prec, c);
	else
	{
		ft_strcat(output, ".");
		putnzeros(output, prec);
	}
}

static void		put_bn_outp_aux(t_bignum res, char *output, int *i)
{
	if (res.size - 1 <= (res.exp - 1) / 4)
	{
		*i = (res.exp - 1) / 4;
		ft_strcatnbr(output, res.number[(res.exp - 1) / 4] /
				ft_pow_bn(10, (res.exp - 1) % 4 + 1));
	}
	else
	{
		ft_strcatnbr(output, res.number[res.size - 1]);
		*i = res.size - 2;
		while (*i > (res.exp - 1) / 4)
		{
			ft_strcatnbr_wzeros(output, res.number[*i], 4);
			(*i)--;
		}
		if (3 - (res.exp - 1) % 4 > 0)
			ft_strcatnbr_wzeros(output,
						res.number[*i] / ft_pow_bn(10, (res.exp - 1) % 4 + 1),
						3 - (res.exp - 1) % 4);
	}
}

void			put_bn_output(t_bignum res, char *output, int prec)
{
	int i;

	if (res.sign == -1)
		ft_strcat(output, "-");
	if (res.size == 0)
	{
		ft_strcat(output, "0");
		return ;
	}
	put_bn_outp_aux(res, output, &i);
	ft_strcat(output, ".");
	ft_strcatnbr_wzeros(output,
		res.number[(res.exp - 1) / 4] % ft_pow_bn(10, (res.exp - 1) % 4 + 1),
		(res.exp - 1) % 4 + 1);
	i--;
	while (i >= 0)
		ft_strcatnbr_wzeros(output, res.number[i--], 4);
	reformat_output(output, prec);
}
