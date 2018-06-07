#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string sought("b");
    std::vector<string> s2={"b","c","d"};
    auto mybegin=s2.begin(),myend=s2.end();
    auto mid=mybegin+(myend-mybegin)/2;
    while(mid!=myend&&*mid!=sought)
    {
      if(sought<*mid)
      {
        myend=mid;
      }
      else{
        mybegin=mid+1;
      }
      mid=mybegin+(myend-mybegin)/2;
    }
    if(mid==myend)
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<*mid<<endl;
    }
    return 0;
}
