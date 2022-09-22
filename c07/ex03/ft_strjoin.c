#include <stdio.h>
#include <stdlib.h>

 char *ft_strjoin(int size, char **strs, char *sep)
{
	char *array;
	int f_count;
	int s_count;
	int arr_count;

	array = malloc(sizeof(char*) * (sizeof(strs) + size));
	if (size == 0)
	{
		free(array);
		return(NULL);
	}
	f_count = 0;
	arr_count = 0;
	while (size--)
	{
		s_count = -1;
		while(strs[f_count][++s_count] != '\0')
		{
			array[arr_count++] = strs[f_count][s_count];
		}
		if (size == 0)
			array[arr_count] = '\0';
		else
		{
			array[arr_count] = *sep;
			arr_count++;
		}
		f_count++;
	}
	return (array);
	
}

int main()
{
	char *array[3];
	array[0] = "neda";
	array[1] = "fatma";
	array[2] = "helia";
	char *sep = " ";
	printf("%s\n", ft_strjoin(3, array, sep));
	return(0);
}
