#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int num[max - min];
	int *ptr;
	int len;
	int counter;

	counter = 0;
	len = max - min;
	while(counter < len)
	{
		num[counter] = min;
		counter++;
		min++;
	}
	ptr = (int *)(malloc(sizeof(int) * len));
	ptr = num;
	return(ptr);
}

int main()
{
	int i;
	for(i = 0; i < 8; i++)
		printf("%d\n", ft_range(10, 18)[i]);
	return(0);
}
