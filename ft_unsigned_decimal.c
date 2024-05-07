/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:40 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 11:08:09 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_counter(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_unsigned_decimal(unsigned long i)
{
	int	len; 

	len = 0;
	len = int_counter(i);
	ft_putnbr_fd(i, 1);
	return (len);
}

/*int	main(void)
{
	ft_unsigned_decimal(13);
	write(1, "\n", 1);
	printf("%u \n", 13);
}*/
