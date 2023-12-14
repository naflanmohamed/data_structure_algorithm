#include <iostream>
using namespace std;

class Node{
	
	private:
		int data;
		Node* left;
		Node *right;
		
	public:
		Node(int d){
			data = d;
			left = right = NULL;
		}
	
	void setData(int d){
		data = d;
	}
	
	int getData(){
		return data;
	}
	
	void setLeft(Node *lft){
		left = lft;
	}
	
	Node* getLeft(){
		return left;
	}
	
	void setRight(Node* rght){
		right = rght;
	}
	
	Node* getRight(){
		return right;
	}
};

class BST{
	private:
		Node *head;
		
		//insert
		void insert(Node* head, int data){
			
			if(head->getData() > data ){
				if(head->getLeft() == NULL){
					head->setLeft(new Node(data));
				}
				else{
					insert(head->getLeft(), data);
				}
			}
			else{
				if(head->getRight() == NULL){
					head->setRight(new Node(data));
				}	
				else{
					insert(head->getRight(), data);
				}
			}
		}
		
		//delete
		Node* deleteNode(Node* head, int key){
			
			if(head == NULL){
				return NULL;
			}
			
			if (head->getData() > key){
				head->setLeft(deleteNode(head->getLeft(), key));
				return head;
			}
			
			if(head->getData() < key){
				head->setRight(deleteNode(head->getRight(), key));
	
			}
			
			if(head->getData() == key)
			{
				Node* temp = head;
				if((head->getLeft() == NULL) && (head->getRight() == NULL))
				{
					delete temp;
					return NULL;
				}
				else if((head->getLeft() == NULL) && (head->getRight() != NULL))
				{
					Node *temp1 = head->getRight();
					delete temp;
					return temp1;
				}
				else if ((head->getLeft() != NULL) && (head->getRight() == NULL))
				{
					Node* temp1 = head->getLeft();
					delete temp;
					return temp1;
				}
				else
				{
					Node* temp1 = temp;
					temp = temp->getRight();
					while(temp->getLeft() != NULL)
					{
						temp = temp->getLeft();
					}
					head->setData(temp->getData());
					temp1->setRight(deleteNode(temp1->getRight(), temp->getData()));
					return head;
				}
				
			}
				
		}
		
		void preOrder(Node* head){
			
			if(head!= NULL){
				cout<<head->getData()<<" ";
				preOrder(head->getLeft());
				preOrder(head->getRight());
			}
		}
		
		void inOrder(Node* head){
			
			if(head != NULL){
				inOrder(head->getLeft());
				cout<<head->getData()<<" ";
				inOrder(head->getRight());
			}
		}
		
		void postOrder(Node* head){
			
			if(head != NULL){
				postOrder(head->getLeft());
				postOrder(head->getRight());
				cout<<head->getData()<<" ";
			}
		}
		
		void makeEmpty(Node *head)
		{
			if(head != NULL)
			{
				makeEmpty(head->getLeft());
				delete head->getLeft();
				makeEmpty(head->getRight());
				delete head->getRight();
			}
		}
		
		int heightOfNode(Node* head){
			if(head == NULL){
				return NULL;
			}
			
			int leftHeight = heightOfNode(head->getLeft());
			int rightHeight = heightOfNode(head->getRight());
			
			return 1+ max(leftHeight, rightHeight);
		}

	public:
		BST(){
			head = NULL;
		}
		
		void insert(int data){
		
			if(head == NULL){
				head = new Node(data);
			}
			else{
				if(head->getData() > data){
					if(head->getLeft() == NULL){
						head->setLeft(new Node(data));
					}
					else{
						insert(head->getLeft(),data);
					}
				}
				else{
					if(head->getRight() == NULL){
						head->setRight(new Node(data));
					}
					else{
						insert(head->getRight(),data);
					}
				}
			}		
		}
		
		void deleteNode(int key)
		{	
			if(head == NULL)
			{
				return;
			}
			if(head->getData() > key)
			{
				head->setLeft(deleteNode(head->getLeft(), key));
			}
			
			if(head->getData() < key)
			{
				head->setRight(deleteNode(head->getRight(), key));
			}
			
			if(head->getData() == key)
			{
				Node* temp = head;
				if((head->getLeft() == NULL) && (head->getRight() == NULL))
				{
					head = NULL;
					delete temp;
				}
				else if((head->getLeft() == NULL) && (head->getRight() != NULL))
				{
					head = head->getRight();
					delete temp;
					
				}
				else if((head->getLeft() != NULL) && (head->getRight() == NULL))
				{
					head = head->getLeft();
					delete temp;
				}
				else
				{
					Node* temp1 = temp;
					temp = temp->getRight();
					while(temp->getLeft() != NULL)
					{
						temp = temp->getLeft();
					}
					head->setData(temp->getData());
					temp1->setRight(deleteNode(temp1->getRight(), temp->getData()));
				}
			}
		}
		
		void preOrder(){
			
			if(head!= NULL){
				cout<<head->getData()<<" ";
				preOrder(head->getLeft());
				preOrder(head->getRight());
			}
		}
		
		void inOrder(){
			
			if(head != NULL){
				inOrder(head->getLeft());
				cout<<head->getData()<<" ";
				inOrder(head->getRight());
			}
		}
		
		void postOrder(){
			
			if(head != NULL){
				postOrder(head->getLeft());
				postOrder(head->getRight());
				cout<<head->getData()<<" ";
			}
		}
		
		~BST(){
			if(head != NULL)
			{
				makeEmpty(head->getLeft());
				delete head->getLeft();
				makeEmpty(head->getRight());
				delete head->getRight();
			}
		}
		
		int heightOfNode(head){
			
			if(head == NULL){
				return NULL;
			}
			
			int leftHeight = heightOfNode(head->getLeft());
			int rightHeight = heightOfNode(head->getRight());
			
			return 1+ max(leftHeight, rightHeight);
		}

};



int main(){
	
	BST tree;
	
	tree.insert(7);
	tree.insert(14);
	tree.insert(3);
	tree.insert(21);
	tree.insert(10);
	tree.insert(4);
	tree.insert(1);
	
	cout<<"Pre Order: ";
	tree.preOrder();
	cout<<endl;
	cout<<"In Order: ";
	tree.inOrder();
	cout<<endl;
	cout<<"Post Order: ";
	tree.postOrder();
	cout<<endl;
	tree.deleteNode(3);
	cout<<"After Delete: ";
	tree.postOrder();
	
	return 0;
}
