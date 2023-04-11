/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:31:37 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/11 20:40:34 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (i < n) && (s1[i] == s2[i]))
		i++;
	if (i == n || n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "abCd";
// 	char	s2[] = "abcd";

//   printf("%d\n", ft_strncmp(s1, s2, 3));
// }
