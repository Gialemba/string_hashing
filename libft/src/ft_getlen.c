/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:54:36 by tali              #+#    #+#             */
/*   Updated: 2024/01/22 21:54:46 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include_h/libft.h"

int	ft_getlen(int n)
{
	int		i;
	size_t	nu;

	i = 1;
	if (n < 0)
	{
		i++;
		nu = (size_t)n * -1;
	}
	else
		nu = (size_t)n;
	while (nu > 9)
	{
		nu /= 10;
		i++;
	}
	return (i);
}
