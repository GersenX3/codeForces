#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	vector<string> arr; 
	arr.push_back("Ace"); 
	arr.push_back("King"); 
	arr.push_back("Queen"); 

       int size = arr.size();
cout<<"Elements of the vector array:"<<endl;
	for (int x= 0; x< size; x++) 
		cout << arr[x] << "\n"; 
}