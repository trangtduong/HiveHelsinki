#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

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

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
}

int		main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	print_list(list);
	printf("list at nbr:\n");
	print_list(ft_list_at(list, 1));

	return (0);
}
