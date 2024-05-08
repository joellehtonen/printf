/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:51 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/08 09:41:03 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long i, char format)
{
	char	*base;
	int		len;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (i >= 16)
	{
		len += ft_hexa(i / 16, format);
	}
	if (ft_character(base[i % 16]) == -1)
		return (-1);
	len++;
	return (len);
}
