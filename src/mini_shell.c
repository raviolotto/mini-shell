/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:17:29 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/24 14:37:38 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mini_shell.h"

void	init(t_general *general, char **envp)
{
	general->lexer = NULL;
	general->envp2 = matrix_dup(envp);
	printf(PINK"\n%s\n", INTRO);
	printf("\n%s\n"RESET, HELLO2);
}


int	main(int ac, char **av, char **envp)
{
	t_general	general;
	t_lex		*tmp;
	char		*inp;

	if (ac != 1)
	{
		printf(RED "error dumb imput\n" RESET);
		return (0);
	}
	init(&general, envp);
	print_matrix(general.envp2);
	write(1, "\n\n", 2);
	print_matrix(envp);
	return(0);
	while (1)
	{
		general.args = readline("kitty shell>");
		lexer(&general);
		tmp = general.lexer;
		while (tmp != NULL)
		{
			printf("token %i\n", tmp->token);
			printf("pipe steatus %i\n", tmp->pipe_status);
			printf("command %s\n\n", tmp->command);
			tmp = tmp->next;
		}
		afalcons(general.lexer);
		general.lexer = NULL;
	}
}
