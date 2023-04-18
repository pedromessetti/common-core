/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:37:09 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/12 19:56:18 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	char p[12] = "Hello World";
// 	int c = '-';

// 	printf("before:%s:\n", p);
// 	ft_memset(p, c, 10);
// 	printf("after:%s:\n", p);
// }