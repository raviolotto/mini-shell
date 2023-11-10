/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:44:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/10 13:48:02 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	menage_token(char *str, int i, t_general *general)
{
	t_lex	*tmp;
	int		j;

	j = 1;
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
	while(what_token(str, i + j) == 0 && str[i + j] != '\0')
		j++;
	printf("%i\n", j);
	return (j);
}

