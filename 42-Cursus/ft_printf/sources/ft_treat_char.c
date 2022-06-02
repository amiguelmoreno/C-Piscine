/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:06:38 by antmoren          #+#    #+#             */
/*   Updated: 2022/06/02 16:34:49 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void	ft_treat_char(va_list ptr, int sub_cnt)
{
	int	x;

	x = va_arg(ptr, int);
	write(1, &x, 1);
	sub_cnt++;
}
