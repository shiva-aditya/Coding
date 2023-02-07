#include <iostream>
using namespace std;

int main() {
    int num = 19; // int num stores only integers
    int *p = &num ; // *p means it is pointer variable, that's the way to intilaize
    //It storing only addresses of the another variable, that means "int *p            =          &num"
    //                                                            pointer variable  assigning  num int variable address
    //How can we access? 
    //by using '*' followed by the name of pointer variable we can access
    //that means '*p' will give the value which is stored at that address
    //"p" will give the address, it will stored, fact is that the address showed by p is equal to address of num variable
    //cout<<*p; // gives value of num == 19
    //cout<<pl; // gives the address is stores == 0x61ff08
    //Note : there is no such thing like *num, it doesn't give the value, unless it gives error

    //One way of declaring the pointer variable and assigning address
    int *pv , v;
    v = 20;
    pv = &v;
    //cout<<pv<<" "<<&v; //0x61ff00 0x61ff00
    //For Understanding            pv = &v and *pv = v -->True
    //if is not right when it is *pv != &v and pv != v -->False

    //when we change the value v to something the *pv values also changes "TRY IT"
    //cout<<"Before "<<*pv<<endl; // --> 20 before 
    //v = 10; // changing the variable value
    //cout<<"After "<<*pv<<endl; // --> After 10
    //whatever the values is there in variable v is just displaying by *pv
    //since pv, &v connected to each other, *pv changes will also changes the value v
    //*pv = 20;
    //cout<<"After After "<<v<<endl; // --> After After 20
}
