#include<bits/stdc++.h>
using namespace std;
int main(){
	//Sub Arrays
	int n = 5;
	int a[5] = {1,2,3,4,5};
	for (int k = 0 ; k < n ; k++){
		for (int i = k ; i < n ; i++){
			for (int j = k ; j <= i ; j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
	}
	int a[4] = {1,2,3};
	int n = 3;
	
	// Sub Sets
	for (int i = 1 ; i < (1<<n) ; i++){
		for (int j = 0 ; j < n ; j++){//Trick to get numbers
			if (i & (1<<j))cout<<a[j]<<" ";
		}
		cout<<endl;
	}

	//Power Set
	vector<string> AllPossibleStrings(string s){
	    vector<string>ans;
	    int l = s.length();
	    for (int i = 1 ; i < (1<<l) ; i++){
	        string blk = "";
	        for (int j = 0 ; j < s.length() ; j++){
	            if (i & (1<<j))blk +=s[j];
	        }
	        ans.push_back(blk);
	    }
	    sort(ans.begin() , ans.end());
	    return ans;
	}
 }
