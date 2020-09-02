#include <iostream>
#include <vector>
#include <string.h>



using namespace std;
int main() {
    vector<string> v;
    v.push_back("abc");
    v.push_back("pqr");
    v.push_back("cde");

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}

    return 0;
}