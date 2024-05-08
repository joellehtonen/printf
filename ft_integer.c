/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/08 09:47:20 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	int_printer(int i)
{
	long	l;
	char	c;
	int		len;

	len = 0;
	l = (long)i;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
		len++;
	}
	if (l >= 10)
		len += int_printer(l / 10);
	c = (l % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_integer(int i)
{
	int	len;

	len = int_printer(i);
	return (len);
}
