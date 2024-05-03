/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:56:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/03 15:22:34 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// what about characters like /n?

static int	function_chooser(char input_char, va_list args)
{
	void *ptr;
	
	if (input_char == 'c')
		ft_character(va_arg(args, char));
	else if (input_char == 's')
		ft_string(va_arg(args, char *));
	else if (input_char == 'i' || input_char == 'd')
		ft_integer(va_arg(args, int));
	else if (input_char == 'u')
		ft_unsigned_decimal(va_arg(args, unsigned int));
	else if (input_char == 'x' || input_char == 'X')
		ft_hexa(va_arg(args, unsigned int), input_char);
	else if (input_char == "p")
		ft_void_pointer;
	else if (input_char == '%')
		ft_putchar_fd('%', 1);
	else
		return (-1);
}

int	ft_printf(const char *input, ...)
{
	int		index;
	va_list args;

	va_start(args, input);
	while (input[index] != '\0')
	 {
		if (input[index] == '%')
			function_chooser(*(input + index + 1), args);
		else
			ft_putchar_fd(input[index], 1);
		index++;
	 }
	va_end(args);
	if //something
		return (1);
	else
		return (0);
}
