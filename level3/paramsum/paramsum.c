/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:22:31 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/29 16:24:03 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_small_putnbr(int n)
{
	char	digit;

	if (n >= 10)
		ft_small_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_small_put_nbr(argc - 0x1);
	ft_putchar_fd((char)0x0a, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
