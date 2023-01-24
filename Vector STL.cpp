#include<bits/stdc++.h>
using namespace std;


int main() {
    //can use all sorted array operations in vector container like lower&upper bound ans so on.
    vector<int >v = {8,3,4,5};//declaring vector;
    sort(v.begin() , v.end());
    //sort the vector
    //we can upto certain distance by giving second distance as we want
    v.begin();
    //gives address of first element, to retrieve data put *
    v.end();
    //gives address of last + one address , to retireve data put *
    v.rbegin();
    //gives address of last element address , to retrieve data put *
    v.rend();
    //returns a reverse iterator which points to the reverse end of the vector i.e. beginning of the vector.
    v.size();
    //gives "number of element" in vector
    v.resize(10);
    //Irrespective of length of vector it cuts the vector as the argument given
    //If length of vector is 5 with different elements, if argument is 3 it leaves 
    //vector with length 3 leaving remaining 2 elements behind
    //if we print elements after resize prints upto argument only
    //if the resize element is more than lenght of vector, then it gives 0 to extra elements
    //{8,3,4,5,0,0,0,0,0,0}
    v.resize(10,100);
    //this means that if resize is more than length of vector extra element is given as second argument
    //{8,3,4,5,100,100,100,100,100,100};
    v.capacity();//constant 
    //gives the size of storage space alooted to vector
    //difference bet size and capacity:
    //-->size gives no of elements present in vector, size changes when we resize it
    //-->capacity gives number of elements stored in vector at start, when we resize it still it gives starting length only
    v.empty();
    //return bool true if empty else return false
    v.front();
    //gives first element in vector
    v.back();
    //gives last element in vector
    v.assign(4,10);
    //     num,element arguments fully overide the vector with element repeated by num times
    //with v.assign(4,10); //{10,10,10,10,10};
    v.push_back(10);
    //push element into vector
    v.pop_back();
    //delete last element of vector
    v.insert(v.begin(),100);
    //         address,element make insert the element at that address generaaly at that index
    v.erase(v.begin());
    //take address as argument and delete the element
    //we can delete multiple element by giving two arguments start and end it works like i.e. does not work at end address
    //ans works upto end - 1 address
    vector<int>v2={5,6,7,8,9};
    v.swap(v2);
    //swap contents from one vector to another
    v.clear();
    //clear the vector contents
    v.emplace(v.begin(),2);
    //same as insert takes address and element
    v.emplace_back(1);
    //same as insert 
    reverse(v.begin() , v.end());
    //reverse the vector
}
=========different way to for loop==========
for (int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
for (auto it = v.begin() ; it!=v.end() ; it++){
    cout<<*it<<" ";
}
for (auto it : v){
    cout<<it<<" ";
}
