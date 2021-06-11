#include <stdio.h>

enum tt_bool{TRUE, FALSE};
typedef enum tt_bool t_bool;

int main()
{
	t_bool a;

	a = TRUE;
	printf("%d", a);
	return (0);
}