/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:56 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 13:15:27 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_void_pointer(void *pointer)
{
	int		len;
	char	format;

	format = 'x';
	len = 0;
	len = ft_string("0x");
	len += ft_hexa((unsigned long)pointer, format);
	return (len);
}
