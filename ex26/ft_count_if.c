/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeson <hyeson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:32:51 by hyeson            #+#    #+#             */
/*   Updated: 2024/09/27 17:03:14 by hyeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			cnt++;
		}
		i++;
	}
	return (cnt);
}
