/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:52:49 by nchee             #+#    #+#             */
/*   Updated: 2022/06/01 10:54:09 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	counter = 0;
	while (src[counter] && counter < size - 1)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (i);
}
