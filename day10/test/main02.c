#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));
void	ft_putnbr(int nb);

int add_one(int i)
{
	return (i + 1);
}

int main()
{
	int *map;
	int i;

	int tab[7] = {0, 1, 2, 3, 4, 5, 6};
	map = ft_map(tab, 7, &add_one);
	i = -1;
	while (++i < 7)
	{
		printf("%d", map[i]);
	}
	printf("\n");
	free(map);
	return (0);
}
