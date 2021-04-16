/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfagunde <rfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:15:27 by rfagunde          #+#    #+#             */
/*   Updated: 2021/04/16 03:17:05 by rfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int testad;
	int count;

	testad = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
		{
			testad = 0;
		}
		count++;
	}
	return (testad);
}
