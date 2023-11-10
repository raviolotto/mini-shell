/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:17:29 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/10 13:11:50 by jcardina         ###   ########.fr       */
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
	t_lex		*tmp;
	char		*inp;

	if (ac != 1)
	{
		printf(RED "error dumb imput\n" RESET);
		return(0);
	}
	init_general(&general);
	printf("\n%s\n", INTRO);
	while(1)
	{
		general.args = readline("mini>");
		//printf("%s\n", general.args);
		//printf("%i\n", lexer(&general));
		lexer(&general);
		tmp = general.lexer;
		while(tmp != NULL)
		{
			printf("token %i\n", tmp->token);
			tmp = tmp->next;
		}
	}
	//init_general(&general);
	//printf("\n%s\n", INTRO);
	//general.args = av[1];
	//printf("%i\n", lexer(&general));
	//tmp = general.lexer;
	//while(tmp != NULL)
	//{
	//	printf("token %i\n", tmp->token);
	//	tmp = tmp->next;
	//}
}
