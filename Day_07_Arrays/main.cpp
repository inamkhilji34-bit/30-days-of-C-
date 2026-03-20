#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10];
    int sum = 0;
    cout<<"Enter 10 numbers: "<<endl;
    for(int i = 0; i < 10; i++){
        cin>>arr[i];
        sum += arr[i];}
    int maxval = *max_element(arr, arr+10);
    int minval = *min_element(arr, arr+10);
    double avg =  (double)sum / 10;
    cout<<"Max   :"<<maxval<<endl;
    cout<<"Min   :"<<minval<<endl;
return 0;
}