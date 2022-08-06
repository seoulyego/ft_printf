/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:12:05 by yeongo            #+#    #+#             */
/*   Updated: 2022/08/06 12:44:50 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BASE_10 "0123456789"
# define BASE_16_LOWER "0123456789abcdef"
# define BASE_16_UPPER "0123456789ABCDEF"

# define ERROR -1
# define END_OF_STR -2

int	ft_putchar(char c, int *result);
int	ft_putstr(char *str, int *result);
int	ft_putnbr(int n, int *result);
int	ft_putnbr_base(unsigned int n, int base, char flag, int *result);
int	ft_print_memory(unsigned long long addr, int *result);
int	ft_printf(const char *format, ...);

#endif 
