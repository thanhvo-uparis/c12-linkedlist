#include "ft_list.h"

t_list *create_elem(void *data)
{
	t_list* new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if(new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void display(t_list *begin_list)
{
  while(begin_list != NULL)
  {
    printf("%d-->", *(int *)begin_list->data);
    begin_list = begin_list->next;
  }
}


int main()
{
  t_list *head = NULL;
  int a = 13;
  int b = 3;
  int c = 7;
  void *d = &a;
  void *e = &b;
  void *f = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = create_elem(d);
  head->next = create_elem(e);
  head->next->next =create_elem(f);
  display(head);
  printf("\nsize = %d", ft_list_size(head));
  return 0;
}
