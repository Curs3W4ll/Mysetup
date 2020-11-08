/*
** EPITECH PROJECT, 2020
** Tests
** File description:
** Criterion tests
*/

#include <criterion/criterion.h>
#include "main.h"

Test(test_cat, test_desc)
{
    int get = 4;
    int expected = 4;
    
    cr_assert_eq(get, expected);
}
