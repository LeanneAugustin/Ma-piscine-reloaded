/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:06:37 by leaugust          #+#    #+#             */
/*   Updated: 2024/05/17 12:25:46 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	print_int(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	array[5];
	int	length;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	length = sizeof(array) / sizeof(array[0]);
	printf("Array elements:\n");
	ft_foreach(array, length, &print_int);
	printf("\n");
	return (0);
}*/
