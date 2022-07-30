/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:16:30 by yeongo            #+#    #+#             */
/*   Updated: 2022/07/20 17:35:02 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		d;
	int		index;
	char	*str;
	int		result;

	d = 97;
	str = malloc(sizeof(char) * 8);
	index = 0;
	while (index < 7)
		str[index++] = d++;
	str[index] = '\0';
	d = -1;
	result = printf("dfd %d dfd %s dfd %u dfdf %x", d, str, d, d);
	return (0);
}
