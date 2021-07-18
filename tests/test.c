/*
** EPITECH PROJECT, 2021
** B-PSU-210-PAR-2-1-42sh-yoel.edery
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "enable_lib.h"
#include "just_shell.h"
#include "prototype.h"
#include "parser.h"
#include "builtins.h"
#include "read_line.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(init, test_empty)
{
    cr_assert_eq(0, 0);
}