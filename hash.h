#include <string.h>
#include <stdbool.h>
#define STD_FILE_SYSTEM_SIZE     20480
typedef struct HASHTABLE_NODE {

    mode_t mode; 
    void * entry;
    char * path;

    bool is_linked;
    struct HASHTABLE_NODE * next;
    
} HASHTABLE_NODE;


typedef struct HASHTABLE {
    int size;
    struct HASHTABLE_NODE * table[STD_FILE_SYSTEM_SIZE];

} HASHTABLE;
