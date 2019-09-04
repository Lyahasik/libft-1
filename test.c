/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrisha <mtrisha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:03:18 by mtrisha           #+#    #+#             */
/*   Updated: 2019/09/04 14:29:51 by mtrisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int main()
{
// ft_putchar
	printf("ft_putchar('T')=");
	fflush(stdout);
	ft_putchar('T');
	printf("\n");


// ft_putstr
	printf("ft_putstr(\"I LOVE YOU\")=");
	fflush(stdout);
	ft_putstr("I LOVE YOU");
	printf("\n");


// ft_putendl
	printf("ft_putendl(\"I LOVE YOU\")=");
	fflush(stdout);
	ft_putendl("I LOVE YOU");
	printf("\n");

	return (0);
}
