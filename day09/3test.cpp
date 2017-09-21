#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(void)
{
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);

    list<int>::iterator itor = list1.begin();
    for(;itor != list1.end();itor++)
    {
        cout << *itor << endl;
    }

    return 0;
}
