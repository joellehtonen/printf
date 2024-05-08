/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:56 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/08 09:51:22 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_void_pointer(void *pointer)
{
	int		len;
	char	format;
	int		check;

	format = 'x';
	len = 0;
	len = ft_string("0x");
	check = ft_hexa((unsigned long)pointer, format);
	if (check == -1)
		return (check);
	else
		len += check;
	return (len);
}
