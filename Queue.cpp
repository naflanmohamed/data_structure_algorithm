#include <iostream>
using namespace std;

//Create Queue Class
class Queue {
	private:
		int front = -1;
		int rear = -1;
		int arr[6];
	
	
	public:

	//Add Elements to Queue
	enqueue(int n){
		arr[++rear] = n;
	}

	//Delete Elements From Queue
	Dequeue(){
		return arr[++front];
	}

	//Check Queue Full or not
	isFull(){
		if(rear == 5){
		cout<<endl<<"Queue is Full";
		}
	}

	//Check Queue Empty or not
	isEmpty(){
		if(rear == front){
			cout<<"Queue is Empty"<<endl;
		}
	}

};

//main Fucntion
int main() {
	
	Queue q;

	q.isFull();
	q.isEmpty();
	
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(8);
	
	q.isEmpty();
	
	cout<<q.Dequeue()<<endl;
	cout<<q.Dequeue();
	
	q.enqueue(9);	
	q.enqueue(2);
	q.enqueue(20);
	
	q.isFull();
	
	cout<<endl<<q.Dequeue();
		
	return 0;

}
