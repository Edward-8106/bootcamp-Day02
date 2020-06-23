/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:14:58 by enoko             #+#    #+#             */
/*   Updated: 2020/06/23 10:05:36 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(int d)
{
	write(1, &d , 1);
}
void ft_print_comb2()
{
	int i;
	int j;
	int k;
	int l;
    i = -1;
	while(i <= 1)
	{
		j = i + 1;
		j++;
		while(j <= 7)
		{
			k = i + 1;
			k++;
			while(k <= 8)
			{
				l = i + 1;
				l++;
				while(l <= 9)
				{
					ft_putchar(i + '0');
					ft_putchar(j + '0');
					ft_putchar(k + '0');
					ft_putchar(l + '0');
					ft_putchar(',');
					ft_putchar(' ');
					l++;
				}
			}
		}
	}
}

