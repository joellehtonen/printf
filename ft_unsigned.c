/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:40 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 15:04:48 by jlehtone         ###   ########.fr       */
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
		l = UINT_MAX + l + 1;
	if (l >= 10)
		len += int_printer(l / 10);
	c = (l % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_unsigned(unsigned long i)
{
	int	len;

	len = int_printer(i);
	return (len);
}
