#include <bits/stdc++.h> 
int firstOcc(vector<int>& arr, int n, int key){
    int s=0,e=n-1,first=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            first = mid ;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return first;
}
int lastOcc(vector<int>& arr, int n, int key){
    int s=0,e=n-1,last=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            last = mid ;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return last;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}