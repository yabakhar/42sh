/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelazzou <oelazzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:51:48 by oelazzou          #+#    #+#             */
/*   Updated: 2021/03/17 18:42:27 by oelazzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

char	*err_ret(char *s, char *addrr)
{
	ft_putstr_fd(s, 2);
	return (addrr);
}

void	error_message(char *err_message, int flag)
{
	ft_putstr_fd(err_message, 2);
	if (flag)
		exit(EXIT_FAILURE);
}
