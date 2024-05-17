/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:26:06 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/14 14:30:06 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

// ---Lib---
# include "../libft/libft.h"
# include <signal.h>
# include <sys/types.h>

//---Structure---
typedef struct Client {
    pid_t pid;
    char           *message;
    int            bit;
    int            bit_received;
    char           *current_char;
   struct Client  *next;
} Client;

//---Server---
void	server_handler(int signum, siginfo_t *info, void *context);
Client **init_waitlist(void );
void print_message(Client *client, Client **waitlist);
void    add_client(Client **waitlist, pid_t pid);
Client *find_client(pid_t client, Client **list);
void free_waitlist(Client **waitlist);
void remove_client(Client *to_remove, Client **waitlist);

//---Client---
void	ft_send_char(char c, pid_t server_pid);
void	ft_send_message(char *str, pid_t server_pid);
void	client_handler(int sig);

//---Function---
void	ft_error(int i);
void	ft_banner(int i, pid_t pid);

#endif