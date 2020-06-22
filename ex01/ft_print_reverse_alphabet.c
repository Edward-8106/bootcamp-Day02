/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:04:07 by enoko             #+#    #+#             */
/*   Updated: 2020/06/22 13:35:50 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_reverse_alphabet()
{
	char i;
	i = 'z';
	while(i <= 'z')
	{
		ft_putchar(i);
		i--;
	}
}

