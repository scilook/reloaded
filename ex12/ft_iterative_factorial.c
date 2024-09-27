/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeson <hyeson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:20:19 by hyeson            #+#    #+#             */
/*   Updated: 2024/09/27 09:49:08 by hyeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	cnt;

	fact = 1;
	cnt = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb > cnt)
		{
			cnt++;
			fact *= cnt;
		}
		return (fact);
	}
}
