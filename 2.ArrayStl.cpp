#include <iostream>
#include<array>

using namespace std;

int main(){

  //This is a normal or Basic Array
  int basic[3] = {1,2,3};

  //This is STL array
  //int is type of array,4 is size of array, a is name of arr
  array<int,4> a = {1,2,3,4};

  int size = a.size();

  for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
  }

  //"at" wil return the element of the given index
  cout<<"Element at 2nd index ->"<<a.at(2)<<endl;

  //empty will give boolean either 0 or 1
  cout<<"Empty or Not->"<<a.empty()<<endl;


  cout<<"First Element "  <<a.front()<<endl;

  cout<<"last element "<<a.back()<<endl;

}  
