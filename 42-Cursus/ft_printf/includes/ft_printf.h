/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:51:39 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 20:19:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

//ft_printf.c
int		ft_conversion(char value, va_list ptr, int i);

//sources
void	ft_treat_char(va_list ptr, int sub_cnt);
void	ft_treat_decimal(va_list ptr, int sub_cnt);
void	ft_treat_unsigned_decimal(va_list ptr, int sub_cnt);
void	ft_treat_hex_min(va_list ptr, int sub_cnt);
void	ft_treat_hex_may(va_list ptr, int sub_cnt);
void	ft_treat_percent(va_list ptr, int sub_cnt);
void	ft_treat_string(va_list ptr, int sub_cnt);
void	ft_treat_pointer(va_list ptr, unsigned long int number, int sub_cnt);
void	ft_putpnt(unsigned long int number, va_list ptr, int sub_cnt);
void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);
void	ft_passbase10(unsigned int num, va_list ptr, int sub_cnt);

#endif