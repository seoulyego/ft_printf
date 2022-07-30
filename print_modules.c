/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_modules.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:13:59 by yeongo            #+#    #+#             */
/*   Updated: 2022/07/20 18:46:58 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

int	ft_putnbr(unsigned int n, int *result)
{
	if (n > 9)
		ft_putnbr(n / 10, result);
	ft_putchar(n % 10 + 48);
	return (*result);
}

int	ft_putnbr_base(unsigned int n, int base, char flag, int *result)
{
		if (n > base - 1)
			ft_putnbr_base(n / base, base, flag, result);
		if (flag == 'u')
			*result += ft_putchar(BASE_10[n % base]);
		else if (flag == 'x')
			*result += ft_putchar(BASE_16_LOWER[n % base]);
		else if (flag == 'X')
			*result += ft_putchar(BASE_16_UPPER[n % base]);
	return (*result);
}

int	ft_print_memory(unsigned long long addr, int *result)
{
	if (addr > 15)
		ft_print_memory(addr / 16, result);
	ft_putchar(BASE_16_LOWER[addr % 16]);
	return (*result);
}
