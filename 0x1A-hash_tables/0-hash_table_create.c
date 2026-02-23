#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size) {
    // creates a hash table
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    if (!table)
    return NULL;

    table-> size = size;
    table-> array = (hash_node_t**) calloc(table-> size, sizeof(hash_table_t*));

	if (!array)
	return NULL;

    for (int i = 0; i < table->size; i++){
        table->array[i] = NULL;
    }

    // returen a pionter to the table
	return table;
}
