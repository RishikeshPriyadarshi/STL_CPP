#include <iostream>
#include <vector>
using namespace std;

int main() {

  //Here "5 is size of vector"
  //and "1 means all the elements intalized with 1"
  vector<int> a(5,1);
  cout<<"print a "<<endl;
  for(int i:a){
    cout<<i<<" ";
  }cout<<endl;  

  // creation of vector
  vector<int> v;
  cout << "Capacity->" << v.capacity() << endl;//Here size will be 0
                                           //because no memory is assigned


  //Elemen hm dalte hai vector ke andar using
  //".push_back" funcn
  v.push_back(1);
  cout<<"Capacity->"<<v.capacity()<<endl;


  v.push_back(2);
  cout<<"Capacity->"<<v.capacity()<<endl;
  

  v.push_back(3);
  cout<<"Capacity->"<<v.capacity()<<endl;
  cout<<"Size->"<<v.size()<<endl;


  cout<<"Element at 2nd index "<<v.at(2)<<endl;

  //cout<<"Element at 3rd index "<<v.at(3)<<endl;
     //it will go outOfRange as there is no 3rd index i.e.4th element


  cout<<"front "<<v.front()<<endl;
  cout<<"back "<<v.back()<<endl;




  //Before pop
  cout<<"before pop "<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;


  v.pop_back();

  cout<<"after pop "<<endl;
  for(int i:v){
    cout<<i<<" ";
  }



  //Using Clear Operattion
  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;






}

//Here the T.C is O(1) beacuse we r able to access in const time


/* 
  Capacity getys doubled with each ne vector

  Size is total no. of elements in vector
*/