#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    unsigned char *tmp;
    tmp = malloc(nmemb * size);
    if(tmp == NULL)
        return (NULL);
    ft_bzero(tmp , nmemb * size);
    return (tmp);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    int *array = (int *)calloc(num_elements, element_size);

    if (array == NULL)
    {
        perror("calloc failed");
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < num_elements; i++)
    {
        if (array[i] != 0)
        {
            printf("Test failed: array[%zu] = %d\n", i, array[i]);
            free(array);
            return EXIT_FAILURE;
        }
    }

    printf("Test passed: all elements initialized to zero.\n");

    free(array);
    return EXIT_SUCCESS;
}