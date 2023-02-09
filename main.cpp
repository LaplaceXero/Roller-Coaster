#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0 ;
	int x; //The height of Chef's son
	int h; //minimum height required to go on the ride
	bool y; //result
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>h;
	    
	    y = (x >= h)? true:false;
	    
	    if(y)
	        cout <<"Yes" <<endl;
	    
	    else
	        cout <<"No" <<endl;
	    
	}
	return 0;
}
