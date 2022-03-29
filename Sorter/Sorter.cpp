#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    int i;
    string s;
    ifstream in;
    if (argc < 2)
    {
        cout << "Write something or use console, if u don't use it";
        return 0;
    }
    else
    {
        in.open(argv[1]);
    if (!in.is_open()) {
            cerr << "Call the program in a new way and type the correct path" << endl;
            return 0;
        }
    }

    while (!in.eof())
    {
        getline(in, s);
        cout << s << endl;
    }
    return 0;
}