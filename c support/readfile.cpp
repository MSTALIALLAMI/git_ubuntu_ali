// C++ implementation to read
// file word by word
#include <bits/stdc++.h>
using namespace std;

// driver code
int main()
{
    // filestream variable file
    fstream file;
    string word, t, q, filename;

    // filename of the file
    filename = "testfile.txt";

    // opening file
    file.open(filename.c_str());

    // extracting words form the file
    int i=0;
    //for (int i=0;i<=2;i++)
    //{
        // displaying content
        file >> word;
        cout << "N= " <<word<< endl;
        file >> word;
        cout << "N2= " <<word<< endl;
        file >> word;
        cout << "L= " <<word<< endl;
    //}

    return 0;
}
