#include<bits/stdc++.h>
using namespace std;

struct Node { 
	int data; 
	struct Node* next; 
}; 

void push(struct Node** head_ref, int data) 
{ 
	struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* temp = *head_ref; 
	ptr1->data = data; 
	ptr1->next = *head_ref; 

	if (*head_ref != NULL) { 
		while (temp->next != *head_ref) 
			temp = temp->next; 
		temp->next = ptr1; 
	} else
		ptr1->next = ptr1; 

	*head_ref = ptr1; 
} 

int countNodes(struct Node* head) 
{ 
	struct Node* temp = head; 
	int result = 0; 
	if (head != NULL) { 
		do { 
			temp = temp->next; 
			result++; 
		} while (temp != head); 
	} 

	return result; 
} 

int main() 
{ 
	struct Node* head = NULL; 
	push(&head, 12); 
	push(&head, 56); 
	push(&head, 2); 
	push(&head, 11); 

	printf("%d", countNodes(head)); 

	return 0; 
} 
