/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:31:43 by crramire          #+#    #+#             */
/*   Updated: 2023/02/21 14:26:29 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

// Las librerías estandar por qué están definidas aquí? porque algún parámetro de función tiene fº de la librería standard?
// #include <unistd.h>
// #include <stdlib.h>

// Creo que esto es para el bonus
// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

#endif
