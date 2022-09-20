#include <stdio.h>
#include <stdlib.h>

int **ft_ultimate_range(int **range, int min, int max)
{
        int num[max - min];
        int *ptr;
        int len;
        int counter;

        counter = 0;
	if(max > min)
	{
		len = max - min;
		while(counter < len)
		{
			num[counter] = min;
			counter++;
			min++;
		}
		ptr = (int *)(malloc(sizeof(int) * len));
		ptr = num;
		range = &ptr;
        	return(range);
	}
	else
		return (0);
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
