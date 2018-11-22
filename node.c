#include "node.h"

NODE* createNode(int* itemPtr) {
	NODE* nodePtr = NULL;
	nodePtr = (NODE*)malloc(sizeof(NODE));
	nodePtr->dataPtr = itemPtr;
	nodePtr->link = NULL;

	return nodePtr;
}