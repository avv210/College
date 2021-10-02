#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string.h>

using namespace std;

struct Node {
	char data[100];
	Node *next;
};

Node *head = NULL, *tail = NULL;

void insertNode(char data[100]) {
	Node *newNode = (Node*)malloc(sizeof(Node));
	
	strcpy(newNode->data, data);
	newNode->next = NULL;
	
	if (head == NULL) {
		cout << "[==Membuat Head Baru==]\n";
		head = newNode;
		tail = newNode;	
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}

void deleteNode(char find[100]) {
	Node *ptr = head;
	Node *preptr;
	
	if (strcmp(head->data, find) == 0) {
		head = head->next;
		free(ptr);
	} else {
		while (strcmp(ptr->data, find) != 0) {
			preptr = ptr;
			ptr = ptr->next;
			if (ptr == NULL) {
				cout << "Data tidak ditemukan!\n";
				return;
			}
		}
		
		if (ptr == tail) {
			free(ptr);
			tail = preptr;
			tail->next = NULL;
		} else {
			preptr->next = ptr->next;
			free(ptr);	
		}
	}
}

void printNode(Node *node) {
	cout << "[" << node->data << "] --> Ptr Address " << node << " --> Next Ptr Address " << node->next << "\n";
}

void printLinkedList() {
	Node *ptr = head;
	
	cout << "\nList Data:\n";
	if (ptr == NULL) {
		cout << "!--Kosong--!\n";
	} else {
		while (ptr != NULL) {
			printNode(ptr);
			ptr = ptr->next;
		}	
	}
	cout << "\n";
}

Node *searchNode(char find[100]) {
  Node *ptr = head;
  
  while (strcmp(ptr->data, find) != 0) {
	ptr = ptr->next;
	if (ptr == NULL) {
		return NULL;
	}
  }

  return ptr;
}

int main() {
	
	cout << "Entry Serial Data" << "\n";
	
	char input[100];
	int count = 1;
	
	do {
		cout << "Input Data " << count << ": ";
		gets(input);
		
		if (strlen(input) > 0) {
			insertNode(input);
			count++;
		}
	} while(strlen(input) > 0);
	
	cout << "\nTotal Data: " << (count - 1) << "\n";
	
	printLinkedList();
	
	char find[100], newInput[100];
	
	do {
		cout << "Data yang anda cari: "; 
		gets(find);
		
		if (strlen(find) > 0) {
			Node *findNode = searchNode(find);
			if (findNode == NULL) {
				cout << "Data tidak ditemukan!\n";
			} else {
				cout << "Data " << findNode->data << " ada pada alamat " << findNode << "\n";

				deleteNode(find);
				
				printLinkedList();
			}
		}
	} while(strlen(find) > 0);
	
	return 0;
}

