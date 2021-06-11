#include <stdio.h>

void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);

int main()
{
	char *str = "4GdAE. bTst  ab854KS ";
	char **tab = ft_split_whitespaces(str);
	ft_sort_wordtab(tab);

	int i;
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
