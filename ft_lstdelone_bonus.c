/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:25:55 by crramire          #+#    #+#             */
/*   Updated: 2023/04/14 16:47:47 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void	(*del)(void*))
{
	if (!lst | !del)
		return ;
	del(lst -> content);
	free(lst);
}

/* void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*n1;

	n1 = ft_lstnew((void *)1);
	printf("Contenido del primer elemento antes de eliminarlo: %d", (int) n1->content);
	printf("Contenido del primer elemento después de eliminarlo: %p", (void *)n1);
	ft_lstdelone(n1, &del);
	return(0);
} */