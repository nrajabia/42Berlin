#include <stdio.h>
#include <stdlib.h>

int **ft_ultimate_range(int **range, int min, int max)
{
        int *array;
        int len;
        int counter;

        len = max - min;
        array = malloc(sizeof(int) * len);
        if (!array)
                return(0);
        if (min >= max)
        {
                array = NULL;
                return (0);
        }
        else
        {
                array[0] = min;
                counter = 0;
                while (++counter < len)
                        array[counter] = ++min;
		range = &array;
                return (range);
        }
}

int main()
{
        int i;
	int **range;
	
	printf("length is %lu\n", sizeof(ft_ultimate_range(range,10, 18)));
        for(i = 0; i < 8; i++)
                printf("%d\n", ft_ultimate_range(range,10, 18)[0][i]);
        return(0);
} 
