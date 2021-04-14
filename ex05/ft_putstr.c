/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:45:34 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/14 17:02:59 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		write(1, &str[contador], 1);
		contador++;
	}
}
