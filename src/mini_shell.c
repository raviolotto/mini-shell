/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:17:29 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/09 12:03:32 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini_shell.h"

void	init_general(t_general *general)
{
	general->lexer = NULL;
}

int	main(int ac, char **av, char **envp)
{
	t_general	general;

	if (ac != 1 || av[1])
	{
		printf(RED "merror dumb imput\n" RESET);
		exit(0);
	}
	init_general(&general);
	general.args = "  	  ";
	printf("\n%s\n", INTRO);
	printf("%i\n", lexer(&general));
}
