#include<iostream>
#include<algorithm>
using namespace std;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("inputf.in","r",stdin);
    freopen("outputf.out","w",stdout);
    #endif
}
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
