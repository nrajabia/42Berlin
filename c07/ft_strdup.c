#include <stdio.h>

char *ft_strdup(char *src)
{
	char	*ptr;
	int	counter;

	counter = 0;
	while(*src)
		counter++;
	ptr = malloc(counter);
	ptr = src;
	return(ptr);
}

int main()
{
	printf("%s", ft_strdup("hello!"));
}
