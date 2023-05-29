/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:56:48 by pmessett          #+#    #+#             */
/*   Updated: 2023/05/29 13:59:51 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base_is_possible(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void	ft_converter(long int n, int baselen, char *base, int fd)
{
	if (n / baselen == 0)
		ft_putchar_fd(base[n % baselen], fd);
	else
	{
		ft_converter(n / baselen, baselen, base, fd);
		ft_putchar_fd(base[n % baselen], fd);
	}
}

/*Outputs the integer ’n’ converted to any base passed as argument to the given file
descriptor.*/
void	ft_putnbr_base_fd(int nbr, char *base, int fd)
{
	long int	n;
	int			baselen;

	n = nbr;
	baselen = 0;
	while (base[baselen])
	{
		if (base[baselen] == '+' || base[baselen] == '-')
			return ;
		baselen++;
	}
	if (baselen <= 1)
		return ;
	if (ft_base_is_possible(base))
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	ft_converter(n, baselen, base, fd);
}

// int	main(void)
// {
// 	ft_putnbr_base(9, "abc");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-32, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(29092, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-29092, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-29092, "0");
// 	ft_putnbr_base(-29092, "12-3");
// 	ft_putnbr_base(-29092, "+12+-+3");
// 	ft_putnbr_base(-29092, "111");
// 	return (0);
// }
