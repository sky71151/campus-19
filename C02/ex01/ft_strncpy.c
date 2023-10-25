/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-bae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:21:16 by rvan-bae          #+#    #+#             */
/*   Updated: 2023/10/24 12:41:03 by rvan-bae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	char	*save;

	save = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (save);
}
/*
#include <stdio.h>

int main() {
    char source[] = "Dit is de bronstring";
    char destination[20]; 

    ft_strncpy(destination, source, 10);
    destination[10] = '\0';
    printf("Test 1:\n");
    printf("Bronstring: %s\n", source);
    printf("Bestemmingsreeks: %s\n",destination);

    ft_strncpy(destination, source, 11);
    destination[11] = '\0';
    printf("Test 2:\n");
    printf("Bronstring: %s\n", source);
    printf("Bestemmingsreeks: %s\n",destination);

    ft_strncpy(destination, source, 30);
   
    printf("Test 3:\n");
    printf("Bronstring: %s\n", source);
    printf("Bestemmingsreeks: %s\n",destination);

    return 0;
}*/
