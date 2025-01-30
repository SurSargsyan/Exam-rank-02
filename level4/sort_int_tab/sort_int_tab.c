/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:18:35 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/30 11:18:54 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
		int     tmp;

		tmp = *b;
		*b = *a;
		*a = tmp;
}

void    sort_int_tab(int *tab, unsigned int size)
{
		unsigned int    idx;
		int                             check;

		check = 1;
		while (check == 1)
		{
				idx = 0;
				check = 0;
				while (idx < size)
				{
						if (tab[idx] > tab[idx + 1])
						{
								ft_swap(&tab[idx], &tab[idx  + 1]);
								check = 1;
						}
						idx++;
				}
		}
}