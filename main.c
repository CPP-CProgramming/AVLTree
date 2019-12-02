#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b)
{
	if (a > b) return a;
	return a;
}

typedef struct 
{
	int data;
	int height;
	struct Node* leftChild;
	struct Node* rightChild;

} Node;

