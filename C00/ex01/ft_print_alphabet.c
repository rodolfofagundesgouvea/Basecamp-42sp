/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:13:04 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/07 23:00:42 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	char letra;

	letra = 97;
	while (letra <= 122)
	{
		write(1, &letra, 1);
		letra++;
	}
}
