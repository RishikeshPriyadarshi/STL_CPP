#include<iostream>
#include<stack>

using namespace std;
int main(){

    stack<string> s;

    s.push("rish");
    s.push("hai");
    s.push("good");
    
    //top element will be that in stack 
    //hich got in last
    cout<<"top elemen-> "<<s.top()<<endl;

    s.pop();
    cout<<"top element->"<<s.top()<<endl;


    //Size
    cout<<"Size of stack-> "<<s.size()<<endl;


    //check empty or not
    cout<<"Empty or not-> "<<s.empty();
}