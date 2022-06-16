/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explainmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchee <nchee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:47:01 by nchee             #+#    #+#             */
/*   Updated: 2022/05/22 10:02:10 by nchee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y); /* (2) declare function rush with param int x & int y */ 

int main(void)
{
    rush(1,5); /* (1) call ft rush with  5 to int x , 3 to int y */
    return (0);
}
