#include<iostream>
#include<climits>
using namespace std;
void max_subarr(int arr[], int n){
    int currsum = 0;
    int max_sum = INT_MIN;
    int s = 0, start = 0, e = 0;
    for(int i=0; i<n; i++){
        currsum += arr[i];
        if(max_sum <currsum){
        max_sum = currsum;
        start = s; 
        e  = i;    
        }
        if(currsum <0){
            currsum = 0;
            s = i+1;  
        }
    }
    cout<<"Maximum contiguous sum is : "<< max_sum;
    cout<<"\nStarting index (0 based indexing) : "<<start; 
    cout<<"\nEnding index (0 based indexing) : "<<e;  

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    max_subarr(arr,n);
    return 0;
}
