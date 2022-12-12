#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	
	ptr = malloc(count * size);
	if(!ptr)
		return(NULL);
	ft_bzero(ptr, count * size);
	return(ptr);
}

int main()
{
	printf("%d", ft_calloc(4, sizeof(int)));
}
