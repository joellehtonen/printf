/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <jlehtone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:38 by jlehtone          #+#    #+#             */
/*   Updated: 2024/05/07 11:19:14 by jlehtone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_string(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (s[len] != '\0')
		len++;
	write(1, s, len);
	return (len);
}

/*int main(void)
{
	char *a = "abc";

	ft_string(a);
	write(1, "\n", 1);
	printf("%s", a);
}*/
