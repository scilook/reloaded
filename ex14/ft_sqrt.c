/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeson <hyeson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:55:48 by hyeson            #+#    #+#             */
/*   Updated: 2024/09/27 13:33:02 by hyeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	root;

	if (nb < 1)
	{
		return (0);
	}
	root = 1;
	while (root * root <= (unsigned int) nb)
	{
		if (root * root == (unsigned int) nb)
			return (root);
		root++;
	}
	return (0);
}
