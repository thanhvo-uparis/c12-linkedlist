/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:56:40 by tvo               #+#    #+#             */
/*   Updated: 2023/02/09 23:05:36 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

// int main(void)
// {
// 	t_list	node1;
// 	node1.next = NULL;
// 	t_list *phead;

// 	phead = &node1;
// 	node1.str = "hellomyfriend";
// 	printf("%s", phead->str);
// }

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	tmp->str = str;
	tmp->next = list;
	return (tmp);
}

void print_list(t_list *list)
{
	while (list)
	{
		printf("%s --> ", list->str);
		list = list->next;
	}
}

int main()
{
	t_list *node;
	node = NULL;

	node = add_link(node, "hello");
	node = add_link(node, " myfriend");
	print_list(node);
}
