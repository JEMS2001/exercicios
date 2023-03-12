#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra;
    cout << "digite uma palavra" << endl;
    getline(cin, palavra);

    for(int i=palavra.size() - 1;i>=0;i--){
        cout << palavra[i];
    }

    return 0;
}
