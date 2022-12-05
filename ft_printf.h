/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:35:08 by ccoste            #+#    #+#             */
/*   Updated: 2022/12/05 16:16:08 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_formats(va_list args, const char formats);

int		ft_printf(const char *str, ...);

int		ft_print_char(int c);
int		ft_print_str(char *str);
void	ft_putstr(char *str);

int		ft_print_ptr(unsigned long long ptr);
int		ft_ptrlen(unsigned long long ptr);
void	ft_putptr(unsigned long long ptr);

int		ft_print_nbr(int nbr);
int		uitoa_lenght(unsigned int nbr);
char	*ft_uitoa(unsigned int nbr);
int		ft_print_usgn(unsigned int nbr);

int		ft_print_hex(unsigned int nbr, const char format);
int		ft_hexlen(unsigned int nbr);
void	ft_puthex(unsigned int nbr, const char format);

#endif
