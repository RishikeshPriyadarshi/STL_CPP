/*
 NOTE: The "Size" becomes '0' after erase
     
     but, our "MAX-SIZE" ,Max means the memory 
     allocated to our deque , the starting and
     ending amounts r same
*/

#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;
    
    //pushing or givin element
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //popping element
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //similarly if we want remove front element
    //then we can use pop_front




    //Now we wnt to print the element of 1st index
    cout<<"print element at 1st index -> "<<d.at(1)<<endl;


    //checking empty or not
    cout<<"Empty ot not->"<<d.empty()<<endl;
    

    //using "erase function"
    //In erase funcn we hv to give range,
    //from where to where we wnt to deete
    cout<<"before erase->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//this wil
    //start from begin and delete the 1st elemen from beginng

    cout<<"after erase->"<<d.size()<<endl;

    //prnt the element present after erase
    for(int i:d){

        cout<<i<<" ";
    }


    

}