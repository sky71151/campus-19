#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL;
        return 0;
    }

    int size = max - min;
    *range = (int*)malloc(sizeof(int) * size);

    if (*range == NULL) {
        return -1; 
    }

    for (int i = 0; min < max; i++, min++) {
        (*range)[i] = min;
    }

    return size;
}


#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	size;
	int	*p;
	int	index;

	min = 0;
	max = 12;
	index = 0;
	size = ft_ultimate_range(&p, min, max);

	if (size <= 0)
	{
		printf("pointer = 0");
		return (0);
	}
	
	while (size)
	{
		printf("%d\n",p[index]);
		size--;
		index++;
	}
}
