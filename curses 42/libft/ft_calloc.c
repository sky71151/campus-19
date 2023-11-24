#include "libft.h"

void *ft_calloc(size_t num_elements, size_t element_size) {
    size_t total_size;
    void *ptr;
    
    total_size = num_elements * element_size;
    
    if (element_size != total_size / num_elements)
        return NULL;

    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);
        
    ft_memset(ptr, 0, total_size);

    return ptr;
}

/*
#include <stdio.h>

int main() {
    int num_elements = 5;
    int element_size = sizeof(int);

    
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        printf("Allocation not succeed.\n");
        return 1;
    }

   
    for (int i = 0; i < num_elements; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    free(arr);

    return 0;
}*/