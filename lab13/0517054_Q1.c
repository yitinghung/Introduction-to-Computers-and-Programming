#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n){
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

int getValueByIndex(struct node *start, int index){
    for (int i = 0; i < index; i++)
        start = start -> next;
    return start -> value;
}

int main(){
	int M, N, m, index;
	scanf("%d", &M);
    
    struct node *first;
    first = NULL;
    for (int i = 0; i < M; i++){
        scanf("%d", &m);
        first = add_to_list(first, m);
    }
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &index);
        if (index > M - 1)
            printf("%d\n", 0);
        else{
            index = M - 1- index;
            printf("%d\n", getValueByIndex(first, index));
        }
    }
	return 0;
}


