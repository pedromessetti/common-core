/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:39:57 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/12 17:18:39 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	int		i;
	int		j;

	strim = (char *)malloc(10);
	if (!strim)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
			i++;
		strim[j] = s1[i];
		i++;
		j++;
	}
	strim[i] = '\0';
	return (strim);
}

// int	main(void)
// {
// 	char const *s1 = "carta";
// 	char const *set = "a";

// 	printf("string:%s:\n", s1);
// 	printf("set of char:%s:\n", set);
// 	printf("string trimmed:%s:\n", ft_strtrim(s1, set));
// }