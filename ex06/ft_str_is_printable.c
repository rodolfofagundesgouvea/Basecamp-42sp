/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:32:11 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/16 03:34:55 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int testad;

	testad = 1;
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			testad = 0;
		}
		str++;
	}
	return (testad);
}
