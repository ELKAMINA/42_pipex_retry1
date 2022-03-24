/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminaelk <aminaelk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:30:56 by ael-khat          #+#    #+#             */
/*   Updated: 2022/03/23 15:34:34 by aminaelk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
#include "../pipex.h"

int				ft_putnbr_counting(int n);
int				ft_putchar_counting(char s);
int				ft_putnbr_base(unsigned long long n, char *s);
int				ft_putstr_counting(char *s);
int				ft_printf(const char	*fmt, ...);
unsigned int	ft_strlen(const char	*s);

#endif