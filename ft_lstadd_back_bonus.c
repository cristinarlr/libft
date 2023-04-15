/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:47:58 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/15 16:13:39 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  typedef struct s_list
{
	void		*content; = *** DATA POINTER ***
	struct s_list	*next; = *** LINK POINTER ***
}	t_list; */

void    ft_lstadd_back(t_list **lst, t_list *new)
 {
    t_list *last;

    if(!new)
        return ;
    
    last = ft_lstlast(*lst);
    last -> next = new;
 }

 /* int    main()
 {
    t_list	*head;
	t_list	*newfront;
    t_list	*newback;

	head = ft_lstnew("hola");
	newfront = ft_lstnew("delante ");
    newback = ft_lstnew(" detras");
	ft_lstadd_front(&head, newfront);
    printf("lst %s\n", head);

    return (0);
 } */