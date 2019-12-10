/*You’re given the pointer to the head nodes of two sorted linked lists. 
The data in both lists will be sorted in ascending order. 
Change the next pointers to obtain a single, merged linked list which also has data in ascending order. 
Either head pointer given may be null meaning that the corresponding list is empty.*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

typedef struct SinglyLinkedListNode SinglyLinkedListNode;
typedef struct SinglyLinkedList SinglyLinkedList;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
};

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));

    node->data = node_data;
    node->next = NULL;

    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);

    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }

    (*singly_linked_list)->tail = node;
}

void print_singly_linked_list(SinglyLinkedListNode* node, char* sep, FILE* fptr) {
    while (node) {
        fprintf(fptr, "%d", node->data);

        node = node->next;

        if (node) {
            fprintf(fptr, "%s", sep);
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head2==NULL || head1==NULL)
    {
        if(head1==NULL)
        return head2;
        else
        return head1;
    }
    struct SinglyLinkedListNode *ptr=NULL;
    while(head2!=NULL)
    {
        ptr=head2;
        head2=head2->next;
        ptr->next=NULL;
        struct SinglyLinkedListNode *curr=head1,*prev=NULL;
        while(ptr->data > curr->data)
        {
            prev=curr;
            curr=curr->next;
            if(curr==NULL)
            break;
        }
        if(prev==NULL)
        {
            ptr->next=head1;
            head1=ptr;
        }
        else{
            ptr->next=curr;
            prev->next=ptr;
        }
    }
    return head1;

}

int main()
