/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:38:07 by enoko             #+#    #+#             */
/*   Updated: 2020/06/22 13:58:02 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(int d)
{ 
	write(1, &d, 1);
}
void ft_print_numbers()
{
	int i;
	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}	
}

