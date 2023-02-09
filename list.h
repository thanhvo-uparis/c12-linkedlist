

#ifndef __list_h__
#define __list_h__
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	char	*str;
	t_list	*next;
};

#endif
