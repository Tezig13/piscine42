/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:08:21 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/30 12:03:39 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lenght(char **strs, int size, char *sep)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		lenght += ft_strlen(strs[i]);
		i++;
	}
	lenght = lenght + ft_strlen(sep) * (size - 1) + 1;
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*str;

	lenght = ft_lenght(strs, size, sep);
	str = malloc(sizeof(char) * lenght);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (str == NULL)
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (!(i == size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	char *res = ft_strjoin(ac, av,"-_-");
	printf("%s", res);
	free(res);
}*/
