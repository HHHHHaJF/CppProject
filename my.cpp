#include<iostream>
#include<vector>
#include<String>

using namespace std;
void bubble_sort(vector<int> &arr);


int main()
{
    vector<int> arr={};

}

void bubble_sort(vector<int> &arr)
{
    for(int i=0;i<arr.size()-1;i++)
        for(int j=0;j<arr.size()-i;j++)
        {
            if(arr[j]>arr[j-1]) swap(arr[j],arr[j-1]); 
        }
}

void selection_sort(vector<int>& arr) {
    for(int i=0;i<arr.size()-1;i++)
    {
        int minID=i;
        for(int j=i;j<arr.size();j++)
        {
            if(arr[j]<arr[minID]) minID=j;
        }
        swap(arr[i],arr[minID]);
    }
}


