#include <stdio.h>

int	nmatch(char *s1, char *s2);

int main(void)
{
	char *s1 = "aaa";
	char *s2 = "a***";

	printf("%d\n", nmatch(s1, s2));
	return (0);
}
