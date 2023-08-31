#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int,string> m;

    m[1]="rish";
    m[2]="darsh";
    m[3]="hello";

    //we can insert the value nlike this also
    m.insert({5,"bheem"});


    cout<<"before erase->"<<endl;

    //printing
    //it happens in sorted manner in map
    //in case of unordered map prtn happens in random way
    for(auto i:m){
        //cout<<i.first<<endl;

        cout<<i.first<<" - "<<i.second<<endl;
    }cout<<endl;



    //Count function
    //to find the value
    cout<<"finding value->"<<m.count(13)<<endl;

    cout<<"finding value->"<<m.count(3)<<endl;


    m.erase(3);
    cout<<"after erase "<<endl;
    for(auto i:m)
    cout<<i.first<<" - "<<i.second<<endl;

    cout<<endl;



    //FIND
    //find returns the iterator of that element
    //let's what i does in case of map

    auto it = m.find(5);
    for(auto i =it;i!= m.end();i++){

        cout<<(*i).first<<endl;
    } cout<<endl;
    
   
}

/*
  for - insert, erase, find
  T.C->O(logn)

  in ordered Map :

  implemented using
    Random-Black-Tree  and
    Balance-Tree

    so T.C is O(logn)
*/


/*
  in case of UNORDERED MAP

  T.C-> O(1)

  Becuse implementation occurs with the help of
      Hash-Table
*/