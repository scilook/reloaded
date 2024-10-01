/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeson <hyeson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:50:16 by hyeson            #+#    #+#             */
/*   Updated: 2024/09/27 14:38:35 by hyeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (max > min)
	{
		range = (int *)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			range[i++] = min++;
		}
	}
	else
		range = NULL;
	return (range);
}
