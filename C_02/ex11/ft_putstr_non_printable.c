/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:56:29 by nchee             #+#    #+#             */
/*   Updated: 2022/06/01 11:20:32 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa_change(char c)
{
	int		j;
	char	*base;

	j = c;
	base = "0123456789abcdef";
	if (j <= 15)
	{
		write(1, &base[j], 1);
	}
	else
	{
		hexa_change(j / 16);
		hexa_change(j % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			if (str[i] <= 15)
			{
				write(1, "0", 1);
			}
			hexa_change(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
