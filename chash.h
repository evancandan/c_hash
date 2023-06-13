/*
** EPITECH PROJECT, 2023
** chash
** File description:
** chash
*/

#ifndef CHASH_H_
    #define CHASH_H_

    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>

    #define HASH_KEY 5381
    #define HASH_OPERATOR 33


    typedef struct node_s {
        char *key;
        void *data;
        struct node_s *next;
    } node_t;

    typedef struct map_s {
        node_t **map;
        size_t len;
    } map_t;

    size_t get_index_from_key(char const *key, size_t len_of_map);
    int add_element(map_t map, void *elem, char const *key, int size);
    map_t create_map(size_t len);
    void destroy_map(map_t map);
    void *get_elem(map_t map, char const *key);

#endif /* !CHASH_H_ */
