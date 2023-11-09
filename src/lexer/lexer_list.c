/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:44:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/09 16:23:17 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	menage_token(char *str, int i, t_general *general)
{
	t_lex	*tmp;

	if(general->lexer == NULL)
	{
		tmp = new_lex_node();
		general->lexer = tmp;
	}
	else
	{
		tmp = new_lex_node();
		lex_add_last(general->lexer, tmp);
	}
	tmp->token = what_token(str, i);
	if(tmp->token == 3 || tmp->token == 5)
		return (2);
	else
		return(1);
}

int	is_command(char *str, int i, t_general *general)
{
	t_lex	*tmp;
	int		j;

	j = 0;
	if(general->lexer == NULL)
	{
		tmp = new_lex_node();
		general->lexer = tmp;
	}
	else
	{
		tmp = new_lex_node();
		lex_add_last(general->lexer, tmp);
	}
	while(iswhite(str[i + j]) == 1 && what_token(str, i + j) == 0)
	{
		j++;
		write(1, "a\n", 2);
	}
	return (j);
}
