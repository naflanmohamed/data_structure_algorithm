#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *Next;
	
		Node(int d){
			data = d;
			Next = NULL;
		}
};

class LinkedList{
	
	private:
		int counter;
		Node *head;
	
	public:
		
		LinkedList(){
			counter = 0;
			head = NULL;
		}
		
		
	void addElement(int n){
		
		Node *temp = new Node(n);
		
		if(counter == 0){
			counter++;
			head = temp;
		}
		else{
			Node *current = head;
			while(current->Next!=NULL){
				current = current->Next;
			}
			counter++;
			current->Next = temp;
		}
	}
	
	void deleteElement(int index){
		
		if(index == 1){
			Node* current = head;
			head = current->Next;
			counter--;
			delete current;
		}
		else if(index == counter){
			Node* current = head;
			Node* previous = NULL;
				
			while(current->Next != NULL){
				previous = current;
				current = current->Next;
			}
			previous->Next = NULL;
			counter--;
			delete current;
		}
		else{
			Node* current = head;
			Node* previous = NULL;
			
			for(int i=1;i<index;i++){
				previous = current;
				current = current->Next;
			}
			previous->Next = current->Next;
			counter--;
			delete current;
		}
	}
	
	void displayList(){
		Node* current  = head;
		
		while(current != NULL){
			
			cout<<current->data<<endl;
			current = current->Next;
		}
	}
};

int main(){
	
	LinkedList l;
	
	l.addElement(5);
	l.addElement(9);
	l.addElement(10);
	l.addElement(7);
	l.addElement(8);
	
	l.deleteElement(1);
	//l.deleteElement(5);
	l.deleteElement(4);
	
	l.displayList();
}
