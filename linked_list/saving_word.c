#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[100];
} element;

typedef struct ListNode {
	element data;
  struct ListNode *link;
} ListNode;

ListNode* insert_first(ListNode *head, element value) {
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

void print_list(ListNode *head) {
	ListNode *p = head;
	while(p != NULL) {
		printf("%s->", p->data.name);
		p = p->link;
	}
	printf("NULL\n");
}

int main(void) {
	ListNode *head = NULL;
	element data;
	
	strcpy(data.name, "say");
	head = insert_first(head, data);
	print_list(head);
	
	strcpy(data.name, "hi");
	head = insert_first(head, data);
	print_list(head);
	return 0;
}

