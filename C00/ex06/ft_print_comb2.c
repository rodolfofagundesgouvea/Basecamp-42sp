/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:07:19 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/12 22:15:12 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c1, char c2)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_number(int i1, int i2)
{
	char intpchar1;
	char intpchar2;

	if (i1 <= 9)
	{
		intpchar1 = '0';
		intpchar2 = i1 + '0';
		ft_putchar(intpchar1, intpchar2);
	}
	else if (i1 <= i2)
	{
		intpchar1 = i1 / 10 + '0';
		intpchar2 = i1 % 10 + '0';
		ft_putchar(intpchar1, intpchar2);
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_number(x, 98);
			write(1, " ", 1);
			ft_print_number(y, 99);
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
