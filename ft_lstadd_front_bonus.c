/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:43:47 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/14 12:58:48 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  typedef struct s_list
{
	void		*content; = *** DATA POINTER ***
	struct s_list	*next; = *** LINK POINTER ***
}	t_list; */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}


/* void	ft_lstadd_front(t_list **lst, t_list *new)
{
	printf("antes de la función:\n");
	printf("la dirección de **lst: %p\n", &*lst);
	printf("el valor de *lst: %p\n", *lst);
	printf("la dirección de *lst: %p\n", &lst);
	printf("el valor de lst: %p\n", lst);
	printf("el valor de (*lst) -> next: %p\n", (*lst) -> next);
	printf("la dirección de new: %p\n", &new);
	printf("el valor de new: %p\n", new);
	printf("el valor de new -> next: %p\n\n", new -> next);
	if(!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
	printf("después de la función:\n");
	printf("la dirección de **lst: %p\n", &*lst);
	printf("el valor de *lst: %p\n", *lst);
	printf("la dirección de *lst: %p\n", &lst);
	printf("el valor de lst: %p\n", lst);
	printf("el valor de (*lst) -> next: %p\n", (*lst) -> next);
	printf("la dirección de new: %p\n", &new);
	printf("el valor de new: %p\n", new);
	printf("el valor de new -> next: %p\n\n", new -> next);
} */

/* int main() 
{
    int var = 5;
    int* ptr;

    ptr = &var;  // Asigna la dirección de memoria de 'var' a 'ptr'

    printf("El valor de 'var' es: %d\n", var);
    printf("La dirección de memoria de 'var' es: %p\n", &var);
    printf("El valor de 'ptr' es: %p\n", ptr);
    printf("El valor apuntado por 'ptr' es: %d\n", *ptr);

    *ptr = 10;  // Cambia el valor de 'var' a 10

    printf("El valor de 'var' es: %d\n", var);

    return 0;
} */
/* 
int	main()
{
	t_list	*head;
	t_list	*new;

	head = ft_lstnew("hola");
	new = ft_lstnew("mundo");
	ft_lstadd_front(&head, new);
	//meter estos debajo de (*lst) -> next = new; en la función de arriba
	//printf("address nodo lst: %p\n", lst);
	//printf("address nodo lst: %p\n", new);
	return (0);
} */
