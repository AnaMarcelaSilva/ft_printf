/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:37:54 by amarcela          #+#    #+#             */
/*   Updated: 2022/10/18 04:35:31 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isptr(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	count += ft_putnbr(nbr, 'x');
	return (count);
}
