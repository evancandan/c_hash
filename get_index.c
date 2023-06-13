/*
** EPITECH PROJECT, 2023
** chash
** File description:
** get index
*/

#include "chash.h"

size_t get_index_from_key(char const *key, size_t size_of_map)
{
    size_t index = HASH_KEY;

    for (size_t i = 0; key[i]; i++)
        index = index * HASH_OPERATOR + key[i];
    return index % size_of_map;
}
