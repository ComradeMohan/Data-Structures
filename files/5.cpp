// C code to implement Kruskal's algorithm

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int value;
	struct node *next;
};
int main()
{
	struct node *boxE, *head, *boxN;
	int index=0;
	boxE=head=(struct node *)malloc(sizeof(struct node));
	head->value=index;
	for(index=1;index<=3;index++)
	{
		boxN=(struct node *)malloc(sizeof(struct node));
		boxE->next=boxN;
		boxN->value=index;
		boxE=boxN;
	}
	for(index=0;index<=3;index++)
	{
		printf("value at index %d is %d\n",index, head->value);
		head=head->next;
				printf("value at index %d is %d\n",index+1, head->value);

	}
}