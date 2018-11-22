#include <stdio.h>

typedef struct node NODE;
typedef struct node {
	int *dataPtr;
	struct NODE* link;
}NODE;

NODE* createNode(int* itemPtr);