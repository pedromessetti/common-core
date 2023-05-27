/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:21:56 by pmessett          #+#    #+#             */
/*   Updated: 2023/05/25 10:34:44 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i])
		new_s[i] = s1[i];
	j = -1;
	while (s2[++j])
		new_s[i++] = s2[j];
	new_s[i] = '\0';
	return (new_s);
}

// int main(void)
// {
// 	char const *s1 = "Hello ";
// 	char const *s2 = "World!";

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("new_s: %s\n", ft_strjoin(s1, s2));
// 	return (0);
// }