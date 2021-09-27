#include <iostream>
using namespace std;

int main()
{
	 int fav;
	 int *favPointer = &fav;
	 int &favReference = fav;
	 const int norm {fav};
			 
	 fav = 5;
	 cout << fav << endl;
				 
	 // incrementing the value of fav through its pointer
	 ++*favPointer;
	 cout << fav << endl;
		             
	 // incrementing the value of fav through its reference
	 ++favReference;
	 cout << fav << endl;
	    
	 // norm = 4    ===>>> assignment of read-only variable 'norm'
	 cout << norm;
	                                         
 }
