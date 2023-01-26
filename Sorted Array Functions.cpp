#include<iostream>
#include<algorithm>
using namespace std;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.out","w",stdout);
    #endif
}
//every time we are giving arguments to functions like binary_search, lower_bound, 
//upper_bound, find we are giving like this (a,                         ,a+n,                    key                 )
//                                           array first element address,address of last element,the element to search
//we print indexes by subtracting obtained address with a(address of first element)
int main()
{  
    TakeInput();
    int n,key;
    cin>>n>>key;
    int a[n]={1,2,3,4,5};
    int *id = find(a,a+n,key);
    //"find" gives the key element and give that address. 
    //Thats why using address variable
    bool w = binary_search(a,a+n,key);
    //"binary_search" gives the key element present in
    //array or not and give boolean of True or False. Thats why using bool variable
    int *jd = lower_bound(a,a+n,key);
    //"lower_bound" gives the key element address when present, if it is not present 
    //it wil gives the next greater element address of that key
    int *pd = upper_bound(a,a+n,key);
    cout<<pd<<" "<<pd-a;
    //"upper_bound" gives the next greater element address of that key
}
