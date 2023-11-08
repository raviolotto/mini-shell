/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:17:29 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/08 16:00:49 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/mini_shell.h"

int main(int ac, char **av, char **envp)
{
	t_general	general

	if(ac != 1 || av[1])
	{
		printf(RED "merror dumb imput\n" RESET);
		exit(0);
	}
	printf("\n%s\n", INTRO);
	printf("%i\n", lexer("   	"));
}
