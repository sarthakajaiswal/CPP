#include <stdio.h> 
#include <stdlib.h> 

#define OFFSET_OF(type, mem)           ((unsigned long long)(((type*)0)->mem))
#define CONTAINER_OF(addr, type, mem)  ((type*)((unsigned long long)addr - OFFSET_OF(type, mem))) 

#define SUCCESS     0 
#define LIST_EMPTY  1 

typedef int status_t; 

struct node
{
    struct node* prev; 
    struct node* next; 
}; 

struct fox 
{
    float weight; 
    int height; 
    struct node list_node; 
}; 

struct node* create_list(void); 

int main(void) 
{
    struct node* l1 = create_list(); 

    struct node* new_node; 

    struct fox* new_node = (struct fox*)malloc(sizeof(struct fox*)); 
    if(new_node == NULL) 
    {
        fprintf(stderr, "fatal: out of memory"); 
        exit(EXIT_FAILURE); 
    }
    insert_start(l1, new_node); 
    

    remove_start(l1); 
}

struct node* create_list(void) 
{
    struct node* new_node = NULL; 
    
    new_node = (struct node*)malloc(sizeof(struct node)); 
    if(new_node == NULL) 
    {
        fprintf(stderr, "fatal : error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }
    new_node->next = NULL; 
    new_node->prev = NULL; 

    return (new_node); 
}

status_t insert_start(struct node* list, void* new_node)  
{
    (new_node->list_node).prev = list; 
    (new_node->list_node).next = list->next; 
    list->next = new_node->list_node; 

    return (SUCCESS); 
}

status_t remove_start(struct node* list) 
{
    
}

status_t remove_node(struct node* prev, struct node* next) 
{
    prev->next == NULL; 
}