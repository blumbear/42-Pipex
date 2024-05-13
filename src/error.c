/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:57:51 by ttaquet           #+#    #+#             */
/*   Updated: 2024/05/13 15:59:22 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(char *error)
{
	if (error && ft_strncmp(error, "Usage :", 7) == 0)
		ft_printf("%s\n", error);
	else if (error)
		ft_printf("Error : %s\n", error);
	exit(0);
}
