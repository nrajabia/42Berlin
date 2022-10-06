#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_length(char *av)
{
	int size;

	size = 0;
	while (*av++)
		size++;
	return(size);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *param;
	int count;

	param = malloc(sizeof(t_stock_str) * ac);
	if (!param)
	{
		free(param);
		return(NULL);
	}
	else
	{ 
		count = 0;
		while(ac--)
		{
			param[count].size = ft_length(av[count]);
			param[count].str = av[count];
			param[count].copy = param[count].str;
			count++;
		}
		param[count].size = 0;
                param[count].str = NULL;
                param[count].copy = NULL;
	}
	return(param);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 2);
}

void ft_show_tab(struct s_stock_str *ptr)
{
	int count;
	char num;

	count = 0;
	while (ptr[count].size != 0)
	{
		num = ptr[count].size + 48;
		ft_putstr(&num);
		ft_putstr(ptr[count].str);
		ft_putstr(ptr[count].copy);
		count++;
	}
}

int main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return(0);
}
