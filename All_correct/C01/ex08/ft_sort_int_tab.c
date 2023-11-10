/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:07:28 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 09:10:11 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	index;

	index = 0;
	while (index < size - 1)
	{
		if (tab[index] > tab[index + 1])
		{
			tmp = tab[index];
			tab[index] = tab[index + 1];
			tab[index +1] = tmp;
			index = 0;
		}
		else
		{
			index++;
		}
	}
}
/*
#include <stdio.h>

int main(void) {
    int array[] = {10,5,6,7,1,5,3,6,7,2,20,9,6,3,7,5,0,35,27,21,285,6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("size of array = %d\n", size);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    ft_sort_int_tab(array, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }

    printf("\n");
    return 0;
}
*/
