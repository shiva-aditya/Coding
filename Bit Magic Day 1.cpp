//we shoould each code and execute it that way we understand
#include<bits/stdc++.h>
using namespace std;

//This Function prints Binary
void PrintBinary(int n){
	cout<<n<<" : ";
	for (int i = 10 ; i>=0 ; i--){
		cout<<(1&(n>>i));
	}
	cout<<endl;
}

int main(){

	// 12 == 00001100
	int a = 12;
	int p = 3;
	//1)set the bit in given position
	cout<<(a | (1<<p))<<endl; 28

	//2)unset the bit in given position
	cout<<(a & (~(1<<p)))<<endl; 4

	///3)toggle the bit in given position
	cout<<(a ^ (1<<p)); 

	//Trick 1 : Even or Odd
	//(number&1) true if number is odd else even

	//Trick 2 UpperCase to LowerCase
	//A -->00001000010
	//a -->00001100010
	//diff>00000100000
	//1 left shift by 5 and or(|) with A to get lowercase
	//super duper method is or(|) with space( ) or underscore(_) to get lowercase

	//Trick 3 LowerCase to UpperCase
	//1 left shift by 5 negate it(~) and and(&) with number to get uppercase
	//super duper method is and(&) with space( ) or underscore(_) to get uppercase

	//Trick 4 Count Set Bits
	int n = 15;
	int val = 0;
	while(n){
		if (n&1)val++;
		n = n>>1;
	}
	cout<<val;
	PrintBinary('a');
	
}
