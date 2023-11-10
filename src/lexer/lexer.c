/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:21 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/10 13:51:53 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	what_token(char *str, int i)
{
	if (str[i] == '|')
		return (1);
	else if (str[i] == '>')
	{
		if(str[i + 1] == '>')
			return (3);
		return (2);
	}
	else if (str[i] == '<')
	{
		if(str[i + 1] == '<')
			return (5);
		return (4);
	}
	return (0);
}

int	iswhite(char c)
{
	if(c == ' ' || c > 8 && c < 14)
		return (0);
	else
		return (1);
}

int	lexer(t_general *general)
{
	int i;

	i = 0;
	while(general->args[i] != '\0')
	{
		while (iswhite(general->args[i]) == 0)
			i++;
		//i += jumpspace(general->args, i);
		//printf("%i\n", i);
		i += menage_token(general->args, i, general);
		//write(1, "lexer\n", 6);
		write(1, "lexer\n", 6);
	}
	return(i);
}
