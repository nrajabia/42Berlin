#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int len;
	int counter;

	len = max - min;
	range = malloc(sizeof(int) * len);
	if (!range)
		return(0);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		range[0] = min;
		counter = 0;
		while (++counter < len)
			range[counter] = ++min;
		return (range);
	}
}

int main()
{
	int i;
	for(i = 0; i < sizeof(ft_range(10, 18)); i++)
		printf("%d\n", ft_range(10, 18)[i]);
	return(0);
}
