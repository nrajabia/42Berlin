#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int num[max - min];
	int *ptr;
	int len;
	int counter;

	counter = 0;
	if (max > min)
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
		return(ptr);
	}
	else
		return (NULL);
}

int main()
{
	ft_range(18, 10);
/**	int i;
	for(i = 0; i < sizeof(ft_range(18, 10)); i++)
		printf("%d\n", ft_range(18, 10)[i]);*/
	return(0);
}
