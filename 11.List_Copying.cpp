#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    //ACCCORDING TO QUESTION
    //copying list to new list
    //list<int> n(l);
    list<int> n(5,100);
    cout<<"printing n "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);


    //prining
    for(int i:l ){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;


    //Size
    cout<<" Size of List "<<l.size()<<endl;
                                                        
}