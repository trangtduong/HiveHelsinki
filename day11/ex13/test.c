#include <unistd.h>
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

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
	t_list	*list1;
	t_list	*list2;

	list1 = ft_list_push_params(argc, argv);
	// list1 = NULL;
	printf("list1---\n");
	print_list(list1);
	// list2 = ft_create_elem("Hello World!");
	// list2->next = ft_create_elem("Hello Sweet Camper!");
	list2 = NULL;
	printf("list2---\n");
	print_list(list2);
	ft_list_merge(&list1, list2);
	printf("Merged. List1 now: \n");
	print_list(list1);
	return (0);
}
