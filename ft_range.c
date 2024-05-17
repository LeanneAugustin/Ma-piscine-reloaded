/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:14:00 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/17 13:35:10 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*tab;

	if (max <= min)
		return (0);
	range = max - min;
	tab = malloc(sizeof(int) * range);
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
	}
	return (tab);
}

/*int	main(void)
{
	int	*copy;
	int	i;

	i = 0;
	copy = ft_range(3, 17);
	while (i != (17 - 3))
	{
		printf("%d", copy[i]);
		i++;
	}
	return (0);
}*/
