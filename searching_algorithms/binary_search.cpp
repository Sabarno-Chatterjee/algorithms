// #include<iostream>

// using namespace std;

// int main(){
//     int arr[]={2,4,6,8,9,13,15,17,18,24,26,28,34,38,41};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int low=0, high=size-1, mid;
//     int key;

//     cout<<"Enter the key element"<<endl;
//     cin>>key;

//     while(low<=high){
//         mid=(high+low)/2;
//         if(arr[mid]==key){
//             cout<<"Element found at "<<mid;
//             return 0;
//         }
//         else if(key>arr[mid])
//             low=mid+1;
//         else
//             high=mid-1;

//     }
    
//     cout<<"Element not found"<<endl;

//     return 0;
// }

#include<iostream>

using namespace std;

int binary_search(int a[], int n, int key){
    int low=0, high=n-1, mid;

    while(low<=high){
        mid=(high+low)/2;

        if(key==a[mid])
            return mid;
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,9,13,15,17,18,24,26,28,34,38,41};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key, result;

    cout<<"Enter the key element"<<endl;
    cin>>key;

    result=binary_search(arr, size, key);
    (result==-1) 
        ? cout<<"Element not found"
        : cout<<"Element found at index "<<result;

    return 0;
}