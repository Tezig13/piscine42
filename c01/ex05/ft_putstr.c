/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:28:44 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/11 12:40:42 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*#include <stdio.h>

int		main(void)
{
	char	*str;

	str = "salut";
	ft_putstr(str);
}
*/
