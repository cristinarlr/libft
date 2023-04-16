/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 07:54:48 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/16 00:21:50 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* typedef struct s_list
{
	void			*content; = *** DATA POINTER ***
	struct s_list	*next; = *** LINK POINTER ***
}	t_list; */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	/* if (!content)
		return(0); 
		si añado eso me da error, pq?*/
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return(0);
	new -> content = content;
	new -> next = NULL;
	return(new);
}

/* int main()
{
	char	*data;

	data = "hola que tal";	
	printf("address ft_lstnew: %p\n", ft_lstnew(data));
// meter estos debajo de new -> next en la ft_lstnew
//	printf("address nodo content (new -> content) %p\n", new -> content);
//	printf("address nodo next (new -> next) %p\n\n", new -> next);
//	printf("contenido content: %s\n", (char *)content);
	return(0);
} */
