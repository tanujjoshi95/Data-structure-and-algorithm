#include <iostream>
using namespace std;

void st(string &str, int i, int j)
{

    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    st(str, i, j);
}

int main()
{
    string str = "hello";
    st(str, 0, str.length()-1);

    cout<<str<<endl;
    return 0;
}
