/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:00:45 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 13:43:33 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

int		ft_character(char c);
int		ft_hexa(unsigned long i, char format);
int		ft_integer(int i);
int		ft_printf(const char *input, ...);
int		ft_string(char *s);
int		ft_unsigned(unsigned long i);
int		ft_void_pointer(void *pointer);

#endif
