/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:03:06 by yeongo            #+#    #+#             */
/*   Updated: 2022/08/06 09:02:00 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;
	int		check_err;

	va_start(ap, format);
	result = 0;
	check_err = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				continue ;
			else if (*format == 'c')
				check_err = ft_putchar((unsigned char)va_arg(ap, int), &result);
			else if (*format == '%')
				check_err = ft_putchar('%', &result);
			else if (*format == 's')
				check_err = ft_putstr(va_arg(ap, char *), &result);
			else if (*format == 'd' || *format == 'i')
				check_err = ft_putnbr(va_arg(ap, int), &result);
			else if (*format == 'x' || *format == 'X')
				check_err = ft_putnbr_base(va_arg(ap, unsigned int), 16, *format, &result);
			else if (*format == 'u')
				check_err = ft_putnbr_base(va_arg(ap, unsigned int), 10, *format, &result);
			else if (*format == 'p')
			{
				if (ft_putstr("0x", &result) < 0)
					return (-1);
				check_err = ft_print_memory(va_arg(ap, unsigned long long), &result);
			}
			else
				check_err = ft_putchar(*format, &result);
		}
		else
			ft_putchar(*format, &result);
		if (check_err < 0)
		{
			va_end(ap);
			return (-1);
		}
		format++;
	}
	va_end(ap);
	return (result);
}
