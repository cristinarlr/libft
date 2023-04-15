/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:37:51 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/16 00:04:35 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*aux;
    	t_list  *new_node;
    	t_list	*new_list;
	
    if(!lst | !f)
        return (NULL);
	new_list = NULL;
	aux = lst;
	while(aux)
	{
		new_node = ft_lstnew(f(aux->content));
		if(!new_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		aux = aux->next;
	}
	return(new_list);
}  */


#include "libft.h"

static void	*ft_clear(void *i, t_list *new_list, void del(void *))
{
	(del)(i);
	ft_lstclear(&new_list, del);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*i;

	i = 0;
	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		i = f(lst->content);
		if (!i)
			return (ft_clear(i, new, del));
		tmp = ft_lstnew(i);
		if (!tmp)
		{
			return (ft_clear(i, new, del));
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}