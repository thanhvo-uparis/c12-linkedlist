#ifndef __ft_list__
#define __ft_list__

#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
	struct s_list *next;
	void	*data;
} t_list;

#endif
