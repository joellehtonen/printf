/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:51 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 09:59:27 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	len += ft_character(base[i % 16]);
	return (len);
}

/*int main(void)
{
	int i;
	int j;

	i = ft_hexa(25500, 'x');
	write(1, "\n", 1);
	j = printf("%x", 25500);
	printf("%d \n", i);
	printf("%d \n", j);
}*/
