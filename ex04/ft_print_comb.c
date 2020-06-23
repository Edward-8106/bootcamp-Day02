/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:15:22 by enoko             #+#    #+#             */
/*   Updated: 2020/06/23 09:09:30 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(int d)
{
	write(1, &d, 1);
}
void ft_print_comb()
{
	int i;
	int j;
	int k;
	i = -1;
	while(i <= 7)
	{
		j = i + 1;
		i++;
		while(j <= 8)
		{
			k = j + 1;
			j++;
			while(k <= 9)
			{
				k++;
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
int main()
{
	ft_print_comb();
	return 0;
}
