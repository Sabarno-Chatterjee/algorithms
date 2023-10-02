
// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[10]={1,2,7,4,5,6,3,22,75,34}, sum=0;
//     int key;
//     cout<<"Enter key";
//     cin>>key;
//     for(int i=0; i<10; i++){
//         if(key==arr[i]){
//             cout<<"found at"<<i;
//             return 0;
//         }
//     }
//     cout<<"not found";
   
//     return 0;
// }




#include <iostream>

using namespace std;

int search(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[10]={1,2,7,4,5,6,3,22,75,34}, result;
    int key, length=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter key"<<endl;
    cin>>key;
    
    result=search(arr, length, key);
    
    (result==-1)
        ? cout<<"Element not found in the array"
        : cout<<"Element found at index "<<result;

    return 0;
}