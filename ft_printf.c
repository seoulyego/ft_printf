/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:03:06 by yeongo            #+#    #+#             */
/*   Updated: 2022/07/20 18:35:46 by yeongo           ###   ########.fr       */
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
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
				ft_putchar((unsigned char)va_arg(ap, int));
			else if (*(format + 1) == '%')
				ft_putchar('%');
			else if (*(format + 1) == 's')
				ft_putstr(va_arg(ap, char *));
			else if (*(format + 1) == 'd' || *(format + 1) == 'i')
				;
			else if (*(format + 1) == 'u' || *(format + 1) == 'x' || *(format + 1) == 'X')
				;
			else if (*(format + 1) == 'p')
				;
			format++;
		}
		else
			ft_putchar(*format);
		format++;
	}
	return (result);
}
