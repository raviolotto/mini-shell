/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:44:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/14 17:41:12 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	quotes(char *str, int j)
{
	if(str[j] == 34)
	{
		j++;
		while(str[j] != 34 && str[j])
	}

}

int	pipe_status(t_general *general)
{
	t_lex	*tmp;
	int		i;

	tmp = general->lexer;
	i = 0;
	while (tmp)
	{
		if (tmp->token == 1)
			i++;
		tmp = tmp->next;
	}
	tmp = general->lexer;
	while (tmp)
	{
		if (tmp->token == 1)
			i--;
		if (i == 0)
			tmp->pipe_status = 2;
		tmp = tmp->next;
	}
	return (0);
}

t_lex	*noding(t_general *general)
{
	t_lex	*tmp;

	if (general->lexer == NULL)
	{
		tmp = new_lex_node();
		general->lexer = tmp;
	}
	else
	{
		tmp = new_lex_node();
		lex_add_last(general->lexer, tmp);
	}
	return (tmp);
}

int	menage_token(char *str, int i, t_general *general, int *p)
{
	t_lex	*tmp;
	int		j;

	j = 1;
	tmp = noding(general);
	tmp->token = what_token(str, i);
	if (tmp ->token == 1)
	{
		tmp->pipe_status = *p;
		if (*p == 0)
			*p = 1;
		tmp->command = ft_substr(str, i, j);
		return (j);
	}
	else if (tmp->token == 3 || tmp->token == 5)
		j++;
	while (what_token(str, i + j) == 0 && str[i + j] != '\0')
	// {
	// 	if (str[i + j] == 34 || str[i + j] == 34)
	// 	{
	// 		j++;
	// 		while (str[i + j] != 34 && str[i + j] != 34 && str[i + j] != '\0')
	// 			j++;
	// 	}
	// 	else
			j++;
	//}
	tmp->command = ft_substr(str, i, j);
	return (j);
}
