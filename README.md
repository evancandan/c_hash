# [C] HASH
# A HASH MAP IN [C] USING DJB2 HASH

## MAKEFILE Rules
| **rules** | **what it do** |
|-----------|----------------|
| all *default* | compile the lib and place it in the parent folder |
| clean | remove all the object |
| fclean | remove the lib |

## USAGE

### Create your MAP

```c
    map_t map = create_map(len_of_the_map);
```
### Add an element to your map 
(if the element already exist or the ellement adress is NULL it return 1 or else it return 0)

```c
    int my_age = 21;

    add_elem(map, &my_age, "my age", sizeof(my_age));
```

### You can then Read the data

```c
    int still_my_age = *get_elem(map, "my age");
    
    printf("%d\n", still_my_age);

    // output :
    // 21
```
### Destroy the map

```c
    destroy_map(map);
```
