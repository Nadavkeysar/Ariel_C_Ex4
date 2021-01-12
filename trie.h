#ifndef C_EX3_TRIE_H
#define C_EX3_TRIE_H
#define NUM_LETTERS ((int)26)

// boolean enum
typedef enum {FALSE=0 ,TRUE=1} boolean;
// build a node
typedef struct node {
    
    // The char of the node
    char letter;                           
    
    // How many word there is that end's here
    long unsigned int count;                
    
    // A arr of pointers to children
    struct node* children[NUM_LETTERS]; 

} node;

node* getNode(void);
void printR(node *root, char *str, int index);
void insert(node **root,  char* key);
void print(node *root, char * str, int index);
void free_all(node* root);
int Stop(node *current);

#endif //C_EX3_WARANDPEACE_TRIE_H