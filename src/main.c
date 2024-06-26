/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:35:04 by ttaquet           #+#    #+#             */
/*   Updated: 2024/05/13 16:27:13 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int ac, char **av, char **envp)
{
	int	infile_fd;
	int	outfile_fd;

	if (ac < 5)
		ft_error("Usage : ./pipex file1 cmd1 cmd2 file2");
	infile_fd = open(av[1], O_RDONLY);
	if (infile_fd == -1)
		ft_error("No such file or directory");
}