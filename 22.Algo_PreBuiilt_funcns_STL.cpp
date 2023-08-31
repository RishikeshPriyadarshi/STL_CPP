/*
  Binary search ka ye logic hai ki array ya jo bhi
  vector hai jise hm iterate krne wale hai wo
  sorted hona chaiye
*/

//Q.Binary search
//Q.Lowr Bound
//Q.Upper Bound
#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

    //suppose we wnt to do Binary search

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //chlo isme B.Search Lagate hai
    //Hme find krna hai 6

    cout<<"finding 5->"<<binary_search(v.begin(),v.end(),5)<<endl;
    //yaha hmne 5 search kiya hai jom ki present nahi hai
    //so i will return 0 , boolean type
    //which means false or nott present

    
    //serching 6 it is present
    cout<<"finding 6-> "<<binary_search(v.begin(),v.end(),6);

    cout<<endl;




    //Now lets find LOWER-BOUND
    //we will find L.B for 6 , which will return
    //the iterator
    cout<<"lower-bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper-bound -> "<<upper_bound(v.begin(),v.end(),6)-v.begin();

    cout<<endl;


    //Lets see some more ops
    int a=3;
    int b=5;

    //printing max  and of both
    cout<<"max-> "<<max(a,b)<<endl;
    cout<<"min-> "<<min(a,b)<<endl;

    //swap
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;



    //Reverse
    string abcd = "abcd";

    reverse(abcd.begin(),abcd.end());
    cout<<"reverse string->"<<abcd<<endl;


    //Rotate
    //The number which we hv to rfotate from begin
    //or end we put it on "Middle"
    rotate(v.begin(),v.begin()+1,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    //Sorting funcn
    sort(v.begin(),v.end());
    cout<<"after sor:"<<" ";
    for(auto i:v){
        cout<<i<<" ";
    }

}