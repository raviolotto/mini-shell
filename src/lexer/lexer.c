/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:21 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/08 15:58:25 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/mini_shell.h"

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

int	lexer(char *args)
{
	int i;

	i = 0;
	while(args[i])
	{
		i = jumpspace(args, i);
		if (is_token(args[i]) == 0)
			i += menage_token(args[i], )
		else if(is_command(args[i]) != 0)
	}
	return(i);
}
