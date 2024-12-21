// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec ={'a','c','t','i'};
    vec.push_back('u');
    vec.push_back('w');
    cout<<"size of vetor vec is"<<"  "<< vec.size()<<endl;
    vec.pop_back();
    cout<<"capacity  of vetor vec is"<<"  "<< vec.capacity()<<endl;
     cout<<"size of vetor vec is"<<"  "<< vec.size()<<endl;
     for (auto i : vec){
        cout << i << " "<<endl;
     }
     cout<<"function front  of vector  vec is"<<"  "<< vec.front()<<endl;
     cout<<"function back  of vector  vec is"<<"  "<< vec.back()<<endl;
     cout<<"function at of vector  vec is"<<"  "<< vec.at(1)<<endl;
    // cout<<vec[0]<<endl;
    //   cout<<vec[0]<<endl;
    //     cout<<vec[0]<<endl;
   // cout<<vec[4]<<endl;
    return  0 ;
    
    
}


