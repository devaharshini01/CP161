#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    int n,min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        if(arr[i] < min1) {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i] < min2)
            min2=arr[i];
        if(arr[i] > max1) {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2) {
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i] > max3)
            max3=arr[i];
    }
    int prod1=min1*min2*max1;
    int prod2=max1*max2*max3;
    if(prod1 > prod2)   cout<< max1<<" "<<min2<<" "<<min1;
    else    cout<< max1<<" "<<max2<<" "<<max3;
    return 0;
}