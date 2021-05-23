#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;

        SinglyLinkedList() {
            this->head = nullptr;
        }

};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
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

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == NULL){
        head = new SinglyLinkedListNode(data);
    }else{
        // temp->data = data;
        SinglyLinkedListNode *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = new SinglyLinkedListNode(data);
    }
    return head; 
}

SinglyLinkedListNode* insertAtSpecificPosition(SinglyLinkedListNode* head, int data, int position){
    if(head == NULL){
        head = new SinglyLinkedListNode(data);
    }else{
        SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
        SinglyLinkedListNode* curr = head;
        int pos = 0;
        while(pos+1 < position){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    return head;
}

SinglyLinkedListNode* insertInSortedLinkedList(SinglyLinkedListNode* head, int data){
    if(head == NULL){
        head = new SinglyLinkedListNode(data);
    }else{
        SinglyLinkedListNode* curr = head;
        while (curr->data < data){
            curr = curr->next;
        }
        SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
        temp->next = curr->next;
        curr->next = temp;
    }
    return head;
}

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(llist == NULL){
        return llist;
    }else if(position == 0){
        return llist->next;
    }else{
        SinglyLinkedListNode* curr = llist;
        int pos = 0; 
        while(pos+1 < position){
            curr = curr->next;
            pos++;
        }
        SinglyLinkedListNode* temp = curr->next;
        curr->next = temp->next;    
    }
    return llist;
}


void reversePrint(SinglyLinkedListNode* llist) {
    if(llist == NULL){
        
    } else {
        reversePrint(llist->next);
        cout<<llist->data<<endl;
    }
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
      	SinglyLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
    }

    print_singly_linked_list(llist->head, "\n", fout);
    fout << "\n";

    free_singly_linked_list(llist->head);

    fout.close();

    return 0;
}
