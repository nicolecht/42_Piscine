/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:46:38 by nchee             #+#    #+#             */
/*   Updated: 2022/06/05 15:47:07 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	base;

	if (nb < 2)
		return (0);
	base = 2;
	while (base <= nb / 2)
	{
		if (nb % base == 0)
		{
			return (0);
		}
		base++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
