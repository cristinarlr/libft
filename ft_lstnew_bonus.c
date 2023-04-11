/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 07:54:48 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/11 13:29:26 by crramire         ###   ########.fr       */
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
	
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return(0);
	new -> content = content;
	new -> next = NULL;
	
	return(new);
}

int main()
{
	(void)	*data;

	data = 4;	
	printf("address: %p\n", ft_lstnew(data));
	return(0);
}
