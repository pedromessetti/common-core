/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:04:26 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/12 18:59:25 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

// int	main(void)
// {
// 	char const *s = "Lorem ipsum doloresmain";
// 	unsigned int start = 7;
// 	size_t len = 10;
// 	printf("String:%s:\n", s);
// 	printf("Start index:%d:\n", start);
// 	printf("Length:%zu:\n", len);
// 	printf("Substring:%s:\n", ft_substr(s, start, len));
// }