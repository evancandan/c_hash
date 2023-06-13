/*
** EPITECH PROJECT, 2023
** chash
** File description:
** get_elem
*/

#include "chash.h"

void *get_elem(map_t map, char const *key)
{
    size_t index = get_index_from_key(key, map.len);
    node_t *node = map.map[index];

    if (node == NULL)
        return NULL;
    if (node->next == NULL)
        return node->data;
    while (node->next != NULL) {
        if (strcmp(node->key, key))
            return node->data;
        node = node->next;
    }
    return NULL;
}