/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:51 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/03 16:33:52 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	hexa(unsigned int i, char input_char)
{
	char			*base;
	long			index;

	if (input_char == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	index = 0; 
	while (i > 0)
	{
		if (i > 15)
			hexa(i / 16, input_char);
		index++;
		i--;
	}
	ft_putchar_fd(base[index], 1);
}
int main(void)
{
	hexa(21, 'x');
	write(1, "\n", 1);
	printf("%x \n", 21);
}
