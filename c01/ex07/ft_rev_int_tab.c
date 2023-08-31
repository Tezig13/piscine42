/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:50:10 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/12 19:20:48 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);

	int i = 0;
	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
