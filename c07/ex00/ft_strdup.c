#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char	*ptr;
	int	counter;
	int 	len;

	counter = 0;
	len = 0;
	while(src[counter] != '\0')
	{
		counter++;
		len++;
	}
	ptr = malloc(len);
	ptr = src;
	return(ptr);
}

int main()
{
	printf("%s\n", ft_strdup("hello!"));
	return(0);
}
