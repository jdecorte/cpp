#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

bool compare(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int main()
{
    list<string> lst;
    lst.push_back("dertien");
    lst.push_back("twee");
    lst.push_back("twaalf");

    for (auto const & l:lst)
        cout << l << endl;

    lst.sort(compare);

    for (auto const & l:lst)
        cout << l << endl;
}
