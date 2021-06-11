#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int int_cmp(int x, int y)
{
	return (x - y);
}

int main(void)
{
	int array1[10] = {1,2,3,4,5,6,6,8,9,10};
	int array2[10] = {1,2,3,5,4,6,7,8,9,10};
	int array3[10] = {10, 9, 8,7,6,5,4,3,2,1};

	printf("array1: %d\n", ft_is_sort(array1, 10, &int_cmp));
	printf("array2: %d\n", ft_is_sort(array2, 10, &int_cmp));
	printf("array3: %d\n", ft_is_sort(array3, 10, &int_cmp));
	return (0);
}