// En utilisant double pointer
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list *next;
	int	data;
} t_list;


t_list	*add_link(t_list **head, int data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = *head;
		*head = tmp;
	}
	return (tmp);
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%d -->", head->data);
		head = head->next;
	}
}

int main()
{
	t_list *head = NULL;

	add_link(&head, 1);
	add_link(&head, 2);
	add_link(&head, 3);
	print_list(head);
}
