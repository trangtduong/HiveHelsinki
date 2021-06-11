#include <unistd.h>
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)(void *, void *));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(void *str)
{
	while (*(char *)str != '\0')
		ft_putchar(*(char *)str++);
}

int	ft_strcmp(void *str1, void *str2)
{
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*elem;
	t_list	*ret;

	if (ac <= 0)
		return (0);
	ret = NULL;
	i = -1;
	while (++i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = ret;
		ret = elem;
	}
	return (ret);
}

int		main(int argc, char **argv)
{
	t_list *list;
	void *data_ref;

	data_ref = "Trang";
	list = ft_list_push_params(argc, argv);
	ft_list_foreach_if(list, &ft_putstr, data_ref, &ft_strcmp);
	return (0);
}

