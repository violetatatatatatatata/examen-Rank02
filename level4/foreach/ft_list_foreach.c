/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

#include "list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)			// Se ejecuta hasta el final de la lista
	{
		if (begin_list->data != NULL)	// Verifica que el contenido apuntado por la lista no sea nulo
			(*f)(begin_list->data);		// El puntero *f desreferencia al puntero de la funcion
		begin_list = begin_list->next;	// Asigna el valor de next al actual pasando asi al siguiente
	}
}
