#include <iostream>
#include<map>
#include<unordered_map>// have to add this header file
using namespace std;
int main(){
    map<string,int> m;

    //m[key]=value
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=50;
    m["tablets"]=120;
    m["watch"]=50;

    //m.insert({"camera",25});//passes as pair
    //m.emplace("camera",5);//passes as objects and doesnot print camera twice cause prints unique values
    m.erase("tv");//erase tv
    for(auto p: m){// map is a pair so we can write auto p: var_name
        cout<<p.first<<" "<<p.second<<endl;//key is unique and prints in ascending order
    }
    cout<<"count "<<m.count("laptop")<<endl;
    //m.count returns how many keys of that name exists
    cout<<"corresponding values "<<m["laptop"]<<endl;

    if(m.find("tv")!=m.end()){
        cout<<" found\n";
    }
    else {
        cout<<"not found\n";
    }
    //multimap: do not use []
    multimap<string,int> n;
    n.emplace("table",100);//mmap prints all the same value
    n.emplace("table",100);
    n.emplace("table",100);
    //n.erase("table"); erases all table cause multimap
    n.erase(n.find("table"));//if only wanna dlt  one table will use iterator which will hit the specific memory location

    for(auto p: n)
      cout<<p.first<<" "<<p.second<<endl;
    
     unordered_map<string, int> u;//in this values are not duplicate
     //use emplace() to insert
     //unordered insert,erase,count -> O(1)
}