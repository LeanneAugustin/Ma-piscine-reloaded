/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:06:49 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/17 12:44:44 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
/*
int	starts_with_a(char *str)
{
	if (*str == 'a')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*array[6];
	int		count;

	array[0] = "pomme";
	array[1] = "banane";
	array[2] = "orange";
	array[3] = "aisin";
	array[4] = "abricot";
	array[5] = NULL;
	count = ft_count_if(array, starts_with_a);
	printf("Number of strings starting with 'a': %d\n", count);
	return (0);
}*/
