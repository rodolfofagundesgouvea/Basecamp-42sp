/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:23:25 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/16 03:26:37 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int testad;
	int count;

	testad = 1;
	count = 0;
	while (*str)
	{
		if (*str < 65 || *str > 90)
		{
			testad = 0;
		}
		str++;
	}
	return (testad);
}
