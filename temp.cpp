#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;
int findAnagrams(int input1[],int input2){
   vector<int>arr;
   for(int i=0;i<input2;i++){
       arr.push_back(input1[i]);
   }
    vector<string>arr2;
    string str="";
   // int flag=0;
    int count=0;
    for (int num : arr) {
        string numStr = to_string(num);
        sort(numStr.begin(), numStr.end());
        arr2.push_back(numStr);
        
    }
    int flag=0;
    for (int i = 0; i < arr2.size(); ++i) {
        for (int j = i + 1; j <arr2.size(); ++j) {
            if (arr2[i] == arr2[j])
            {
                str = arr2[i];
                flag=1;
            break;
                return 0; // Exit the program after finding the first repeating number
            }
        }
        if(flag==1){
            break;
        }
    }
   
    for(int i=0;i<arr2.size();i++){
        if(str==arr2[i]){
            count++;
        }
    }
  
    return count;
}
int main() {
    
    int arr[] = {121, 102, 205, 136, 112, 921, 911, 431, 211, 456, 779};
    int size = 11;
    cout<<findAnagrams(arr,size);
}
