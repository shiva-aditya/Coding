#include<bits/stdc++.h>
using namespace std;

struct point{
	int x = 0;
	int y = 1;
};

void display (point); // function declaration
void displayy (point*); // function declaration as pointer variable of datatype struct(point) as argument
int main(){
	struct point p1;
	struct point p2;
	cout<<"p1 : "<<p1.x<<" "<<p1.y<<"\n"; // point p1
	p1.y = 20;
	cout<<"p1.y changed to 20 : "<<p1.y<<"\n";
	cout<<"p2 : "<<p2.x<<" "<<p2.y<<"\n"; // point p2
	struct point p3 = {100,200};
	cout<<"p3 : "<<p3.x<<" "<<p3.y<<"\n"<<"loop"<<"\n"; // point p3
	struct point arr[5]; // struct array conatining struct(point) as data type
	for (int i = 0 ; i < 5 ; i++){
		cout<<arr[i].x<<" "<<arr[i].y<<"\n";
	}
	struct point *p4 = &p1; // declared pointer struct p4 stores address of point 1 struct 
							// to access only "->" is used to get the value stored in p4 stored values in the form of address 
	cout<<p4->x<<" "<<p4->y<<"\n";
	display(p1);
	displayy(p4); // calling external function function giving point struct as datatype in pointer form
}
//external function
void displayy(point *p){
	cout<<p->x<<" "<<p->y<<"\n";
}
//external function
void display(point p){
	cout<<p.x<<" "<<p.y<<"\n";
}

int main(){
	struct point *p1, p2; // p1 is pointer of struct(point) variable p2
	p1 = &p2; // assigning p2 address to p1
	p2.x = 10;
	p2.y = 20;
	cout<<p2.x<<' '<<p2.y<<"\n"; // 10 20
	cout<<(*p1).x<<" "<<(*p1).y<<"\n"; // 10 20
	//we can access element using "*"
	cout<<p1<<" "<<&p2; // same to same
}
