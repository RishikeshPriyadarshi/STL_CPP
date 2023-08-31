#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

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