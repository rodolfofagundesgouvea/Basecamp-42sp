/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:34:43 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/16 02:57:41 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int verificador;
	int c;

	verificador = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 65 || str[c] > 90) && (str[c] < 97 || str[c] > 122))
		{
			verificador = 0;
		}
		c++;
	}
	return (verificador);
}
