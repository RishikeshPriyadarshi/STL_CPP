#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    //Max-Heap
    priority_queue<int> maxi;//When we intalize PQ,
    //then it is based in max heap
    //means wwnever we ill fetch the element , then 
    //that will always be grtst element

    //Min-Heap
    priority_queue<int, vector<int>, greater<int> > mini;


    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<maxi.size()<<endl;


    //Data niklega kaise


    /*
     if we use like this
     for(int i=0;i<maxi.size();i++){

     }

     then it will print 3 and 2 only 
     because maxi.size() is continuously changing 
     because of pop

     so w ill intalize maxi.size() out offor loop in n
    */

    int n= maxi.size();
    for(int i=0;i<maxi.size();i++){
        
        cout<<maxi.top()<<" ";
        maxi.pop();


    }cout<<endl;



    ///For Mini

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m= mini.size();
    for(int i=0;i<m;i++){

        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    //Empty or Not
    cout<<"khali hai kya-> "<<mini.empty()<<endl;



}