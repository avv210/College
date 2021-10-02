#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Node
{
 char name[100];
 Node* next; 
};
Node* head = NULL;
Node* tail = NULL;

void insertNode( char name[100] )
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    strcpy( newNode->name, name );
    newNode->next = NULL;
    
    if ( head == NULL )
    {
        printf( "[==Membuat Head Baru==]\n" );
        head = newNode;
        tail = newNode; 
    }
    
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
/*
void insertAfter( char find[100], char name[100] )
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    strcpy( newNode->name, name );
    newNode->next = NULL;
    
    Node* ptr = head;
    
    if ( strcmp(tail->name, find) == 0 )
    {
        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        while ( strcmp(ptr->name, find) != 0 )
        {
            ptr = ptr->next;
        }
        newNode->next = ptr->next;
        ptr->next = newNode; 
    }
}
*/
/*
void insertBefore( char find[100], char name[100] ) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	
	strcpy( newNode->name, name );
	newNode->next = NULL;
	
	if ( strcmp(head->name, find) == 0 )
    {
		newNode->next = head;
		head = newNode;
	}
    
    else
    {
		Node* ptr = head->next;
		Node* prePtr = head;
		while ( strcmp(ptr->name, find) != 0 )
        {
			ptr = ptr->next;
			prePtr = prePtr->next;
		}
		
		prePtr->next = newNode;
		newNode->next = ptr;
	}
}
*/
/*
void deleteNode( char find[100] ) {
	Node* ptr = head;
	Node* prePtr;
	
	if ( strcmp(head->name, find) == 0 )
    {
		head = head->next;
		free( ptr );
	}
    
    else
    {
		while ( strcmp(ptr->name, find) != 0 )
        {
			prePtr = ptr;
			ptr = ptr->next;
			if (ptr == NULL) {
				cout << "Data tidak ditemukan!\n";
				return;
			}
		}
		
		if ( ptr == tail )
        {
			free( ptr );
			tail = prePtr;
			tail->next = NULL;
		}
        
        else
        {
			prePtr->next = ptr->next;
			free( ptr );	
		}
	}
}
*/
void printNode( Node* node )
{
    cout << "[" << node->name << "] --> alamat Ptr " << node << " --> Next Ptr " << node->next << "\n";
}

void printLinkedList( Node* start )
{
    Node* ptr = start;
    
    printf( "\nList Data:\n" );
    if ( head == NULL )
    {
		printf( "Empty!\n" );
	}
    
    else
    {
		do
        {
			printNode( ptr );
			ptr = ptr->next;
		} while( ptr != start );	
	}
    printf( "\n" );
}

Node* searchNode( char find[100] )
{
    Node* ptr = head;
    
    while ( strcmp(ptr->name, find) != 0  )
    {
        ptr = ptr->next;
        if ( ptr == NULL )
        {
            return NULL;
        }
    }

    return ptr;
}

int main()
{
    printf( "--SOAL 5--\n" );
    printf( "Entry Serial Data\n\n" );
 
    char input[100];
    char find[100];
    char newInput[100];

    int i = 1;
    do
    {
        printf( "Data ke %d: ", i );
        gets( input );
        
        if ( strlen(input) > 0 )
        {
            insertNode( input );
            ++i;
        }
    } while( strlen(input) > 0 );
    
    printf( "\nJumlah Data: %d\n", (i-1) );
    
    tail->next = head;

    printLinkedList(head);

    do {
        printf( "Data yang anda cari: " ); 
        gets( find );
        
        if ( strlen(find) > 0 )
        {
            Node* findNode = searchNode( find );

            if ( findNode == NULL )
            {
                printf( "Data tidak ditemukan!\n" );
            }
            
            else
            {
                cout << "\nData " << findNode->name << " ada pada alamat " << findNode << "\n";
                
                printLinkedList( findNode );
            }
        }
    } while( strlen(find) > 0 );
    
    return 0;
}