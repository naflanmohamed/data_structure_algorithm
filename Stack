#include <iostream>
using namespace std;

class Stack{
	
	private:
	int tos = -1;
	int a[6];
	
	public:
		
	isFull(){
		return tos == 5;
	}
	
	isEmpty(){
		return tos == -1;
	}
	
	push(int n){
		if(isFull()){
			cout<<"Stack is Full";
		}
		else
			a[++tos] = n;
	}
	
	pop(){
		if(isEmpty()){
			cout<<"Stack is Empty";
			
		}
		else
			return a[tos--];
	}
	
};

int main(){
	
	Stack s;
	
	s.push(3);
	s.push(6);
	s.push(10);
	s.push(2);
	s.push(8);
	s.push(11);
	
	
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	cout<<endl;
	cout<<s.pop();
	
	return 0;
}
