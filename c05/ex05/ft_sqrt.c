/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:59:52 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/22 11:11:39 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= 46340)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		else if (sqrt * sqrt > nb)
			break ;
		sqrt++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%i", ft_sqrt(9));
}*/
