/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:44:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/09 12:00:57 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

t_lex	*new_lex_node(void)
{
	t_lex	*tmp;

	tmp = malloc(sizeof(t_lex));
	if (!tmp)
		return (NULL);
	else if (tmp)
	{
		tmp->token = 0;
		tmp->next = NULL;
	}
	return (tmp);
}

int	menage_token(char *str, int i, t_lex **lexer)
{
	t_lex	*tmp;
	if(lexer == NULL)
	{
		tmp = new_lex_node();
		lexer = &tmp;
	}
	else
		tmp = new_lex_node();
		lex_add_last(tmp);
	return(0);
}

int	is_command(char *str, int i, t_lex **lexer)
{
	return (0);
}
