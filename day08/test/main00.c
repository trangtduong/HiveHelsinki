#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

int main()
{
	char *str = "Hello chong 456dgs ab+=\t dfgaw\n geigx     a.";
	// char *str = "";
	char **array;
	int i;
	
	array = ft_split_whitespaces(str);
	// printf("%s",array[0]);
	i = 0;
	while (array[i] != 0)
	{
		printf("*%s*\n", array[i]);
		i++;
	}
	i = 0;
	while (array[i] != 0)
	{
		free(array[i]);
		i++;
	}
	free(array[i]);
	free(array);
	return (0);
}
