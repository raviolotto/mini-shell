/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:21 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/08 16:45:58 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	is_token(char *str)
{
	if (ft_strncmp(str, "|", 1) == 0)
		return (0);

}

int	iswhite(char c)
{
	return(c == ' ' || c > 8 && c < 14);
}

int	jumpspace(char *str, int i)
{
	while(iswhite(str[i]))
		i++;
	return (i);
}

int	lexer(t_general *general)
{
	int i;

	i = 0;
	while(general->args[i])
	{
		i = jumpspace(general->args[i], i);
		if (is_token(general->args[i]) == 0)
			i += menage_token(general->args, i, general->lexer);
		else
			i += is_command(general->args, i, general->lexer);
	}
	return(i);
}
