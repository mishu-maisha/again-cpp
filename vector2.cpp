#include <iostream>
#include<vector>

/*STL=Standard Template Library contains predefined container
or algorithms
                  STL
                  .Containers
                  .Algorithms
                  .iterators
                  .Functions
vector is sequencial STL
syntax:

vector <int>v={1,2,3};
vector <int>v(3,10)  [10 10 10]
vector<int> v2(v1)

Costly functions: insert,erase (o(n))
*/
using namespace std;
int main (){
  vector<int> v;

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.emplace_back(50);

//for vec erasing: vec.erase(Start,End) do no need to print it
  v.erase(v.begin()+1,v.begin()+3);//for end position we need to pass the next iteration

//for inserting: vec.insert(position,val) 100 after 20
  v.insert(v.begin()+2, 100) ;

  //for copying v in v1
  v.clear();
  vector<int>v1(v);
  for(int val: v1){
    cout<<val<<" ";
  }
  cout<<endl;
  
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
   

  
}

