/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:11:34 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/12 18:33:11 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	unsigned int	divisao;
	char			imprimir;
	int				zeroloff;

	divisao = 1000000000;
	zeroloff = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	while (divisao >= 1)
	{
		imprimir = nb / divisao + '0';
		nb = nb % divisao;
		divisao = divisao / 10;
		if (imprimir != '0')
		{
			zeroloff = 1;
		}
		if (zeroloff == 1)
		{
			write(1, &imprimir, 1);
		}
	}
}
