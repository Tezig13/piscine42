/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:56:17 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/19 13:25:24 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	a = nb;
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar(a % 10 + '0');
}
/* int main ()
{
        ft_putnbr(-2147483648);
}*/
