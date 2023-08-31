/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:15:29 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/15 17:56:11 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <string.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "adwwafwDWQfww";
	s2 = "adwwafwDWQfw";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
}*/
