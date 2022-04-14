/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:08:19 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/31 15:02:51 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdlib.h>
#include<unistd.h>

void	ft_bzero(void *s, size_t n);

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

void	ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(const char *s);

#endif
