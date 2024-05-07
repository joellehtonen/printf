/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 11:08:47 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_integer(int i)
{
	int	len;

	len = int_counter(i);
	ft_putnbr_fd(i, 1);
	return (len);
}
