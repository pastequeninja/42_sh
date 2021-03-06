/*
** EPITECH PROJECT, 2019
** 42SH
** File description:
** child_redirection
*/

#include "shell.h"

int child_redirection(t_info *shell, t_command *command)
{
    if (my_strcmp(command->separator, "|") == 0)
        return (pip_redirection(shell, command));
    if (my_strcmp(command->separator, ">") == 0
        && my_strlen(command->separator) == 1)
        return (right_redirection(shell, command));
    if (my_strcmp(command->separator, ">>") == 0
        && my_strlen(command->separator) == 2)
        return (double_right_redirection(shell, command));
    if (my_strcmp(command->separator, "<") == 0
        && my_strlen(command->separator) == 1)
        return (left_redirection(shell, command));
    return (RETURN_SUCCESS);
}
