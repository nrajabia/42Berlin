#include <stdio.h>
#include <stdlib.h>

char *ft_concat_params(int argc, char **argv)
{
	char *str;
	char *ptr;
	int av_first_dim;
	int av_second_dim;
	int strlen;

	av_first_dim = -1;
	strlen = 0;
	while(++av_first_dim < argc)
	{
		av_second_dim = 0;
		while(argv[av_first_dim][av_second_dim] != '\0')
		{
			str[strlen] = argv[av_first_dim][av_second_dim];
			strlen++;
			av_second_dim++;
		}
		str[strlen] = '\n';
		strlen++;
	}
	ptr = malloc(sizeof(char) * sizeof(str));
	ptr = str;
	return(ptr);
}

int main(int ac, char **av)
{
	printf("%s", ft_concat_params(ac, av));
	return(0);
}
