/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:25:23 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 16:26:06 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_hex(int num)
{
	char *hex = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}
int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
