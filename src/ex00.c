#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void print_list(t_list *node)
{
	while (node)
	{
		printf("%d -->", *(int *)node->data);
		node = node->next;
	}
}

int main()
{
	t_list	*node;
	int a = 4242;
	void *ptr;
	ptr = &a;
	node = ft_create_elem(ptr);
	print_list(node);
}
