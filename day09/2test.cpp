#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(void)
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);
   //vec.pop_back();
    //cout << vec.size() << endl;
    /*for(int i=0;i < vec.size();i++)
    {
        cout << vec[i] << endl;
    }*/
    vector<int>::iterator itor = vec.begin();
    //cout << *itor << endl;
    cout << vec.front() << endl;
    for(;itor != vec.end();itor++)
    {       
        cout << *itor << endl;
    }


    return 0;
}
