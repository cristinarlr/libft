/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crramire <crramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:31:43 by crramire          #+#    #+#             */
/*   Updated: 2023/02/28 13:53:30 by crramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

// Las librerías estandar por qué están definidas aquí? porque algún parámetro de función tiene fº de la librería standard?
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Creo que esto es para el bonus
// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_strlen(const char *s);
int	ft_toupper(int c);
int	ft_tolower(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);


#endif
