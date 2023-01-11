#include <bits/stdc++.h> 
using namespace std;
int Pivot(vector<int>& arr,int n){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int BinarySearch(vector<int>& arr, int s, int e, int k){
    int mid=s+(e-s)/2;
        while(s<=e){
            if(k==arr[mid]){
                return mid;
            }
            else if(k>arr[mid]){
                s=mid+1;
            }
            else{ //(k<arr[mid])
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=Pivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
    return BinarySearch(arr,pivot,n-1,k);
        }        
    else{
    return BinarySearch(arr,0,pivot-1,k);
}
}

    


