/*
** EPITECH PROJECT, 2023
** chash
** File description:
** add_element
*/

#include "chash.h"

void *dup_elem(int size, void *elem)
{
    char *cast = elem;
    char *clone = malloc(size);

    for (int i = 0; i < size; i++)
        clone[i] = cast[i];
    return (void *)clone;
}

void add_node(node_t *new_node, node_t *head)
{
    while (head->next)
        head = head->next;
    head->next = new_node;
}

int add_element(map_t map, void *elem, char const *key, int size)
{
    size_t index;
    node_t *new_node;

    if (get_elem(map, key) != NULL || elem == NULL)
        return EXIT_FAILURE;

    index = get_index_from_key(key, map.len);
    new_node = malloc(sizeof(node_t));

    new_node->next = NULL;
    new_node->key = strdup(key);
    new_node->data = dup_elem(size, elem);

    if (map.map[index] == NULL)
        map.map[index] = new_node;
    else
        add_node(new_node, map.map[index]);
    return EXIT_SUCCESS;
}
