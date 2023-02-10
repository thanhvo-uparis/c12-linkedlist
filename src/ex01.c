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

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node = malloc(sizeof(t_list));

	if (*begin_list)
	{
		new_node = ft_create_elem(data);
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
	else
		*begin_list = ft_create_elem(data);
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
  t_list* head;
  head = (t_list *)malloc(sizeof(t_list));
  head = NULL;
  int a = 13;
  int b = 3;
  int c = 7;
  void *ptr = &a;
  void *p = &b;
  void *pt = &c;
  ft_list_push_front(&head, ptr);
  ft_list_push_front(&head, p);
  ft_list_push_front(&head, pt);
  print_list(head);
  return 0;
}
