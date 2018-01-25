#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testCase;
	int arraySize;
	cin>>testCase;


	int array[3000];
	int largest=0;


	while(testCase!=0){
	     int largest=0;
       int secLargest=0;
	    cin>>arraySize;


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
                    if(array[k]>secLargest){
	                secLargest=array[k];
                }
	        }
	    }

	    cout<<secLargest<<endl;


	    testCase--;
	}

	return 0;
}
