/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:56:49 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 15:18:33 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	function_chooser(char format, va_list args)
{
	if (format == 'c')
		return (ft_character(va_arg(args, int)));
	else if (format == 's')
		return (ft_string(va_arg(args, char *)));
	else if (format == 'i' || format == 'd')
		return (ft_integer(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_hexa(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_void_pointer(va_arg(args, void *)));
	else if (format == '%')
		return (ft_character('%'));
	else
		return (-1);
}

int	ft_printf(const char *input, ...)
{
	int		index;
	int		len;
	va_list	args;

	len = 0;
	index = 0;
	va_start(args, input);
	if (input == 0)
		return (-1);
	while (input[index] != '\0')
	{
		if (input[index] == '%')
		{
			len += function_chooser(*(input + index + 1), args);
			index++;
		}
		else
			len += ft_character(input[index]);
		index++;
	}
	va_end(args);
	return (len);
}
int	main(void)
{
	int 	i;
	int 	j;
	char 	a = 'a';
	char 	*b = "abc";
	int 	c = -12;
	int 	d = 12;
	int 	e = 1500;
	char 	*ptr = NULL;

	i = ft_printf("%c\n", a);
	j = printf("%c\n", a);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%s\n", b);
	j = printf("%s\n", b);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%i\n", c);
	j = printf("%i\n", c);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%u\n", d);
	j = printf("%u\n", d);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%x\n", e);
	j = printf("%x\n", e);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%p\n", ptr);
	j = printf("%p\n", ptr);
	printf("%d\n", i);
	printf("%d\n", j);
	i = ft_printf("%d%%\n", d);
	j = printf("%d%%\n", d);
	printf("%d\n", i);
	printf("%d\n", j);
}