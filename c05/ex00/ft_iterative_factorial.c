/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:28:35 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/21 18:06:35 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i", ft_iterative_factorial(0));
}*/
