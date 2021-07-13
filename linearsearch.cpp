#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;                                                                                                                                                                                         


}

int main()
{

    int n;
    cout<<"enter number of elements:";
    cin >> n;
    int i,arr[n];
    cout<<"enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout<<"enter element you want to search:";
    cin>>key;
    cout<<"postion of element:"<<linearsearch(arr,n,key);
    
    return 0;
}