/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 08:55:37 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/13 10:13:40 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*memsrc;
	char		*memdest;

	memsrc = (const char *)src;
	memdest = (char *)dest;
	if (dest > src)
	{
		while (n--)
			memdest[n] = memsrc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
