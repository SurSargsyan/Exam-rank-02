/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:18:29 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 16:18:30 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_hidenp(char *first, char *second)
{
	size_t	matching_chars;

	matching_chars = ft_count_matching_char(first, second);
	if (matching_chars == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_hidenp(argv[0x1], argv[0x2]);
	ft_putchar('\n');
	return (EXIT_FAILURE);
}