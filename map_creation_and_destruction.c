/*
** EPITECH PROJECT, 2023
** chash
** File description:
** map_creation_and_destruction
*/

#include "chash.h"

map_t create_map(size_t len)
{
    map_t map;

    map.len = len;
    map.map = malloc(sizeof(node_t *) * len);
    for (size_t i = 0; i < len; i++)
        map.map[i] = NULL;
    
    return map;
}

void destroy_node(node_t *node)
{
    node_t *head;

    while (node->next != NULL) {
        head = node;
        node = node->next;
        free(head->data);
        free(head->key);
        free(head);
    }
    free(node->data);
    free(node->key);
    free(node);
}

void destroy_map(map_t map)
{
    for (size_t i = 0; i < map.len; i++) {
        if (map.map[i] == NULL)
            continue;
        destroy_node(map.map[i]);   
    }
}
