/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawfik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:14:50 by mtawfik           #+#    #+#             */
/*   Updated: 2023/08/31 11:22:19 by mtawfik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

void	ft_putstr(char *str);

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define EVEN(nbr) (nbr % 2) == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments. \n"
# define SUCCESS 0

#endif
