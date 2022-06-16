/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:33:37 by nchee             #+#    #+#             */
/*   Updated: 2022/06/05 15:33:45 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb <= 2147483647 && nb >= 0)
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			factorial = nb * ft_recursive_factorial (nb - 1);
			return (factorial);
		}
	}
	else
	{
		return (0);
	}
}
