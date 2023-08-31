#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("rishi");
    q.push("is");
    q.push("good");

    cout<<"first element->"<<q.front()<<endl;

    q.pop();//it will remove the first/top ele
    cout<<"first eleement-> " <<q.front()<<endl;


    //size
    cout<<"Size after pop->"<<q.size()<<endl;
    

}