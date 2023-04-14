/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:57:33 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/13 14:28:38 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_space;

	alloc_space = (void *)malloc(nmemb * size);
	if (!alloc_space)
		return (NULL);
	ft_memset(alloc_space, 0, (nmemb * size));
	return (alloc_space);
}
