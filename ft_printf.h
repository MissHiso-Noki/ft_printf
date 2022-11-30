/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste < ccoste@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:39 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/30 17:55:53 by ccoste           ###   ########.fr       */
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


#endif
