/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:51:39 by pmessett          #+#    #+#             */
<<<<<<< HEAD:src/ft_putchar_fd.c
/*   Updated: 2023/05/29 10:07:47 by pmessett         ###   ########.fr       */
=======
/*   Updated: 2023/05/22 15:48:23 by pedro            ###   ########.fr       */
>>>>>>> bf77cac0ff145a34cb0e0000a0349bbb0f5e517f:ft_putchar_fd.c
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
