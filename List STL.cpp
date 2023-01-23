#include<bits/stdc++.h>
using namespace std;


int main() {
    list<int>l={1,1,2,2,2,3,2,3,4,};
    //declartion of list
    //"pretty much (every function) in vector accepts in list also" but some functins are provided extra in list
    //list is also called double ended list
    l.remove(l.begin() , l.end() , 2);
    //take a argument and removes all elements equal to argument in the list
    //{1,3,4};
    l.remove_if("condition");
    //remove the certain element only if the condition provided is satisfied 
    //we write the condition as another function outside the int main() function
    l.unique();//O(nlogn)
    //this works on sorted list only and make list with unique elements only
    l.emplace_front(1);
    //add element at front;
    l.push_front(1);
    //add element at front
    list<int>d={2,3,4};
    //l.splice(l.end(),d);
    //this means that it takes address to get add and another list 
    //if we give begin() it add on from first and if it is end it is from behind
    l.merge(d);//O(m+n-1)
    //merge to list
}
