#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*));

int	ft_is_empty(char *str)
{
	if (!str || *str == '\0')
		return (1);
	return (0);
}

int main()
{
	char *s1 = "Hello";
	char *s2 = "";
	char *s3 = NULL;
	char **tab;

	tab = (char **)malloc(3 * sizeof(*tab));
	tab[0] = s1;
	tab[1] = s2;
	tab[2] = s3;
	printf("%d\n", ft_any(tab, &ft_is_empty));
	free(tab);
	return (0);
}
