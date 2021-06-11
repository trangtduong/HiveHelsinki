#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_is_empty(char *str)
{
	if (!str || *str == '\0')
		return (1);
	return (0);
}

int main()
{
	char *sports[] = { "golf", "abc", "hockey", "football", "", "cricket", "shooting"};

	printf("%d\n", ft_count_if(sports, &ft_is_empty));
	return (0);
}
