/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cristina <Cristina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:05:49 by Cristina          #+#    #+#             */
/*   Updated: 2023/04/15 17:24:24 by Cristina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*aux;	

	if(!lst | !del)
		return ;
	while((*lst) != NULL)
	{
		aux = (*lst)->next;
        ft_lstdelone(*lst, del);
        (*lst) = aux;
	}
}
