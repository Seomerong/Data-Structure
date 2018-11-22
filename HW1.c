#include <malloc.h>
#include "node.h"

int main(void) {
	int* newData = NULL;
	int* nodeData = NULL;
	NODE* node = NULL;

	newData = (int*)malloc(sizeof(int));
	*newData = 7;

	node = createNode(newData);

	int* newData2 = NULL;
	int* nodeData2 = NULL;
	NODE* node2 = NULL;

	newData2 = (int*)malloc(sizeof(int));
	*newData2 = 75;

	node2 = createNode(newData2); // ��� ����

	node->link = node2; // ��ŷ

	NODE* currentNode = node;

	while (currentNode->link != NULL) {
		printf("Data from node: %d\n", *(currentNode->dataPtr));
		currentNode = currentNode->link;
	}
	printf("Data from node: %d\n", *(currentNode->dataPtr));// ���

	return 0;
}