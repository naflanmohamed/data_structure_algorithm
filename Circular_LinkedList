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
			temp->Next = head;
		}
		else{
			Node *current = head;
			while(current->Next != head){
				current = current->Next;
				
			}
			counter++;
			current->Next = temp;
			temp->Next = head;
		}
	}
	
	
	void displayList(){
		Node* current  = head;
		
		while(current->Next != head){
			cout<<current->data<<endl;
			current = current->Next;
		}
		cout<<current->data<<endl;
		cout<<current->Next->data<<endl;
	}
};

int main(){
	
	LinkedList l;
	
	l.addElement(5);
	l.addElement(9);
	l.addElement(10);
	l.addElement(7);
	l.addElement(8);
	
	l.displayList();

  return 0;
}
