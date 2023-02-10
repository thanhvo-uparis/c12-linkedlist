#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    int           data;
    struct s_list *next;
}  t_list;


t_list *create_elem(int data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}

void print_list(t_list *list)
{
	while (list)
	{
		printf("%d-->", list->data);
		list = list->next;
	}
}

int main()
{
	t_list *list;
	list = create_elem(1);
	list->next = create_elem(2);
	list->next->next = create_elem(3);
	print_list(list);
	printf("\n");
	list = list->next;
	print_list(list);
}
