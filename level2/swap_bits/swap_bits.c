/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:30:02 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 15:11:31 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 | octet << 4));
}
/*
int	main(void)
{
	unsigned char	octet;
	unsigned char	octet2 = 5;
	octet =  swap_bits(octet2);
	printf("El valor es: %c \n", octet);
}
*/