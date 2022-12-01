/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:39 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/01 17:07:05 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

int		ft_formats(va_list args, const char str);

int		ft_formats_c(int c);

int		ft_formats_s(char *str);

int		ft_formats_p(unsigned long long c);
int		clen(unsigned long long c);
void	putnbr_fd(unsigned long long c, int fd);

int		ft_formats_di(int nbr);

int		ft_print_u(unsigned int nbr);
char	*uitoa(unsigned int nbr);
int		uitoa_lenght(unsigned int nbr);

int		ft_formats_xX(unsigned int nbr, const char format);
void	puthex(unsigned int nbr, const char format);
int		hexlen(unsigned int nbr);

#endif
