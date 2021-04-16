/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:03:14 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/16 03:07:46 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int testador;
	int count;

	testador = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
		{
			testador = 0;
		}
		count++;
	}
	return (testador);
}
