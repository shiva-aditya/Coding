#include <iostream>
using namespace std;

class linkedlist{
public:
	struct Node{
		int data;
		Node *Next;
		Node(int val){
			data = val;
			Next = NULL;
		}
	};
	Node *Head = NULL;
	Node *Tail = NULL;
	void insert(int x){
		Node *newnode = new Node(x);
		if (Head == NULL){
			Head = newnode;
			Tail = newnode;
			return;
		}
		Tail->Next = newnode;
		Tail = Tail->Next;
	}
	void print(){
		Node *temp = Head;
		while (temp){
			cout<<temp->data<<" ";
			temp = temp->Next;
		}	
	}
	void insert_at_begin(int x){
		Node *newnode = new Node(x);
		newnode->Next = Head;
		Head = newnode;
	}
	void insert_at_end(int x){
		Node *newnode = new Node(x);
		Tail->Next = newnode;
		Tail = Tail->Next;
	}
	void insert_at_pos(int x, int pos){
		Node *newnode = new Node(x);
		Node *temp = Head;
		while (pos > 0){
			temp = temp->Next;
			pos--;
		}
		Node *child = temp->Next;
		temp->Next = newnode;
		newnode->Next = child;
	}
	void delete_at_pos(int pos){
		Node *zero;
		Node *Temp = Head;
		while(pos > 1){
			Temp = Temp->Next;
			pos--;
		}
		zero = Temp->Next;
		Temp->Next = zero->Next;
	} 
};

int main(){
	linkedlist list;
	list.insert(10);
	list.insert(20);
	list.insert(30);
	list.insert_at_begin(0);
	list.insert_at_end(40);
	list.insert_at_end(50);
	list.insert_at_pos(35,3);
	list.delete_at_pos(6);
	list.print();

}
