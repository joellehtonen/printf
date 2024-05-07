/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:56 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 10:04:27 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(void)
{
	char *ptr;
	int i;
	int j;

	i = ft_void_pointer(ptr);
	j = printf("%p", ptr);
	write(1, "\n", 1);
	printf("%d\n", i);
	printf("%d\n", j);
}*/
