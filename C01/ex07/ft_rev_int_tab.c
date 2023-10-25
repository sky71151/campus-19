/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:04:00 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/23 09:06:52 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	index;

	tmp = 0;
	index = 0;
	size -= 1;
	while (index < size)
	{
		tmp = tab[index];
		tab[index] = tab[size];
		tab[size] = tmp;
		index++;
		size--;
	}
}

/*
#include <stdio.h>

int main(void)
{
	int array[]={1,2,3,4,5,6,7,8,9};
	int size = sizeof(array)/sizeof(array[0]);
	
	printf("size of array = %d\n",size);
	for(int i = 0; i<(sizeof(array)/sizeof(array[0]));i++)
	{
		printf("%d,",array[i]);
	}
	printf("\n");

        ft_rev_int_tab(array, size);
        for(int i = 0; i<(sizeof(array)/sizeof(array[0]));i++)
        {
                printf("%d,",array[i]);
        }


	return 0;

}
*/
