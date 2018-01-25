#include <iostream>
using namespace std;

int main() {
	//code
	int testCase;
	int arraySize;
	int array[30];
	int largest=0;
	int secLargest=0;
	cin>>testCase;
	cin>>arraySize;
	
	
	while(testCase!=0){
	    for(int i=0;i<arraySize;i++){
	        cin>>array[i];            //input
	    }
	    for(int j=0;j<arraySize;j++){  //largest
	        if(largest<array[j]){
	            largest=array[j];
	        }
	    }
	    for(int k=0;k<arraySize;k++){  //second Largest
	        if(array[k]<largest){
	            secLargest=array[k];
	        }
	    }
	    
	    cout<<secLargest<<endl;
	    cout<<largest;
	    
	
	    testCase--;
	}
	
	return 0;
}