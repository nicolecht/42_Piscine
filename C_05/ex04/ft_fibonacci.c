/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:40:18 by nchee             #+#    #+#             */
/*   Updated: 2022/06/05 16:13:17 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index >= 2)
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (res);
	}
	return (1);
}
