#include <unistd.h>
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
							int (*cmp)());

void	ft_swap_ptr(void **a, void **b)
{
	void *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *i;
	t_list *j;

	if (!*begin_list)
		return ;
	i = *begin_list;
	while (i->next)
	{
		j = *begin_list;
		while (j->next)
		{
			if ((*cmp)(j->data, j->next->data) > 0)
				ft_swap_ptr(&(j->data), &(j->next->data));
			j = j->next;
		}
		i = i->next;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
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
	ft_list_sort(&list1, &ft_strcmp);
	printf("list1 sorted---\n");
	print_list(list1);
	list2 = ft_create_elem("Ah!!! Hello ");
	list2->next = ft_create_elem("Camper! ");
	list2->next->next = ft_create_elem("How are you?");
	ft_list_sort(&list2, &ft_strcmp);
	// list2 = NULL;
	printf("list2 sorted---\n");
	print_list(list2);
	ft_sorted_list_merge(&list1, list2, &ft_strcmp);
	printf("list1 sorted after merged---\n");
	print_list(list1);
	return (0);
}
