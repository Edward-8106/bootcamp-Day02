/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:03:05 by enoko             #+#    #+#             */
/*   Updated: 2020/06/22 14:44:48 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char i)
{
	write(1, &i, 1);
}
void ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('N');
	} 
		else if (n < 0)
			{
				ft_putchar('P');
			}
}
int main()
{  
	ft_is_negative(1);
	ft_putchar('\n');
	return 0;
}
