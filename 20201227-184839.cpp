#include <stdio.h>
#include <stdlib.h>

/*
Scrypt lng VS Compile lng
IDE
Linked List Concept
LinkedList VS Array
Memory (malloc)
C programming review (pointer, structure, loop, validation, library)

Homework:
Add bellow funcitons to this file:

-## Delete(struct Node* list, int nodeNumber)
    delete `nodeNumber` from the `list` 
-## Insert(struct Node* list, struct Node newNode, int position)
    insert `newNode` on `position` 
-## GetNode(struct Node* list, int nodeNumber) => struct Node *  
    get `nodeNumber` node from the `list`
*/

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode()
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = 0;
    node->next = NULL;

    return node;
}

struct Node *makeList(int count)
{
    if (count < 1)
    {
        printf("makeList: invalid value received: %d\n", count);
        return NULL;
    }

    struct Node *head = createNode();
    struct Node *prev = NULL;
    struct Node *temp = NULL;
    prev = head;

    for (int i = head->data + 1; i < count; i++, prev = prev->next)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = NULL;

        prev->next = temp;
    }

    return head;
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("invalid pointer received");
        return;
    }

    struct Node *temp = head;
    int counter = 0;
    do
    {
        printf("this is %d node\n", temp->data);
        counter++;
    } while (temp = temp->next);
}

void list_insert(struct Node** list, unsigned int i, double data){
	//Insert a memory
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* cursor;
    
    //We store the input data in a Node
    new_node->data = data;
    new_node->next = NULL;
    
    // If it is i, it should be added to
	//the beginning of the list
    if(i == 0){
        new_node->next = *list;
        *list = new_node;
        return;
    }
    
    
    //Move the cursor to the connection point
    cursor = *list;
    i--;
    while(i-- && cursor)
	{
        cursor = cursor->next;
    }
    
    //If the list is empty,
	// the specified position does not exist
    if(NULL == cursor){
        printf("Error, list insert index out of range.\n");
        free(new_node);
        return;
    }
    
    //Otherwise the cursor in the cursor position points to the new house and the pointer in the new house to the next house
    new_node->next = cursor->next;
    cursor->next = new_node;

}

int GetNth(struct Node* head, int index) 
{ 
  
    struct Node* current = head; 
  
    // the index of the 
    // node we're currently 
    // looking at 
    int count = 0; 
    while (current != NULL) { 
        if (count == index) 
            return (current->data); 
        count++; 
        current = current->next; 
    } 
  
    /* if we get to this line, 
    the caller was asking 
    for a non-existent element 
    so we assert fail */
    assert(0); 
} 

void deleteNode(struct Node** head_ref, int key) 
{ 
      
    // Store head node 
    struct Node* temp = *head_ref; 
    struct Node* prev = NULL; 
      
    // If head node itself holds 
    // the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next; // Changed head 
        free(temp);            // free old head 
        return; 
    } 
  
    // Else Search for the key to be deleted,  
    // keep track of the previous node as we 
    // need to change 'prev->next' */ 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) 
        return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    // Free memory 
    free(temp); 
} 

int main()
{
    struct Node *list = makeList(10);
    printList(NULL);

    return 0;
}

