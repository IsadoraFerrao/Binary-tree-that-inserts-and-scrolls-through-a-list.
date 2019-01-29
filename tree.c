/*
  Estrutura de Dados II
  Desafio: Árvores binárias(Inserção e Percorrimento) 
 
*/
#include <stdio.h>
#include <stdlib.h>

/*
 * data Ã© um tipo inteiro.
 */
typedef int data;

typedef struct _node {
	data key;
	struct _node *left;
	struct _node *right;
} node;

/*
 * tree Ã© um ponteiro para um tipo node.
 */
typedef node* tree;

/*
 * *t Ã© um ponteiro para ponteiro do tipo node(**node).
 */
void create(tree *t){ 
	*t = NULL;
}

void insert(tree *t, data key){
	if(*t == NULL){
		node *n = (node *) malloc(sizeof(node));
		n->key = key;
		n->left = n->right = NULL;
		*t = n;
	}else if(key >= (*t)->key)
		insert(&(*t)->right, key);
	else
		insert(&(*t)->left, key);
}


void in_order(tree *t){
	if(*t == NULL)
		return ;
	in_order(&(*t)->left);
	printf("%d ", (*t)->key);
	in_order(&(*t)->right);
}

arvore(){
	
printf("\t            ?\n");
printf("\t           ?¦?\n");
printf("\t          ?¦¦¦?\n");
printf("\t         ?¦¦¦?¦?\n");
printf("\t        ?¦?¦¦¦¦¦?\n");
printf("\t       ?¦¦¦¦?¦¦¦¦?\n");
printf("\t      ?¦¦¦¦¦¦¦?¦¦¦?\n");
printf("\t     ?¦¦?¦¦¦¦¦¦¦¦¦¦?\n");
printf("\t    ?¦¦¦¦¦¦¦¦?¦¦¦¦¦¦?\n");
printf("\t   ?¦¦?¦¦¦¦¦¦¦¦¦¦¦?¦¦?\n");
printf("\t           ¦¦¦\n");
printf("\t           ¦¦¦\n\n");

}


int main(){
	tree root;

	create(&root);
	
	insert(&root, 8);
	insert(&root, 3);
	insert(&root, 10);
	insert(&root, 1);
	insert(&root, 6);
	insert(&root, 14);
	insert(&root, 4);
	insert(&root, 7);
	insert(&root, 13);
	system ("color 1A");
	printf("\n\n\tOla usuario, o resultado da sua arvore e:\n\n");
	arvore();
	printf("\tin_order:");
	in_order(&root);

	return 0;
}
