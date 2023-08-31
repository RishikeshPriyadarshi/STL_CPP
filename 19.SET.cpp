#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    

 //Here he complexity of "insert opn" is O(logn)
 //the reason is B.S.T   

    for (auto i : s)
    {

        cout << i << endl;
    }cout<<endl;


   
   //we will put the iterator from Outside
   set<int>::iterator it= s.begin();
   it++;
   
   s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

   //COUNT
   //Count will tell if element is present or not
    cout<<"ele is present or no?->"<<s.count(9)<<endl;

  //Find Funcion
  //if the ele is present in the set, then it returns
  //the iterator
  set<int>::iterator itr= s.find(5);

  //cout<<"Vlue present at itr->"<<*it<<endl;
  //we got suck using above as i gives 1


  for(auto it=itr; it != s.end();it++){

    cout<<*it<<" ";//it will print 5 and 6
    //means, when we find the value, then the response
    //we get, we get the refrence value
    //means it strted counting from 5
    //so firstly 5 came after that 6, 
    //anything which is afer 5(i.e. ref. val)
    //will get printed

  }cout<<endl;
}

/*
 for insert, find,erase and count
 T.C-> O(logn) , due to B.S.T

 for- size,end,empty
 T.C-> O(1)
*/