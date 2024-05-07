/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 15:02:38 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	int_counter(int n)
{
	int	len;

	if (n < 0)
	{
		n = -n;
		len = 1;
	}
	else
		len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	int_printer(int i)
{
	long	l;
	char	c;

	l = (long)i;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l >= 10)
		int_printer(l / 10);
	c = (l % 10) + '0';
	write(1, &c, 1);
}

int	ft_integer(int i)
{
	int	len;

	len = int_counter(i);
	int_printer(i);
	return (len);
}
