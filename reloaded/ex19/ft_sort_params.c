/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeson <hyeson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:55:11 by hyeson            #+#    #+#             */
/*   Updated: 2024/09/27 11:52:09 by hyeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	while (i < ac)
	{
		j = i;
		while (ft_strcmp(av[j], av[j - 1]) < 0)
		{
			tmp = av[j];
			av[j] = av[j - 1];
			av[j - 1] = tmp;
			j--;
			if (j < 2)
				break ;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	ft_sort(ac, av);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
