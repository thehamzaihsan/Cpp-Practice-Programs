#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int vowels = 0;
    string line;
    string file_contents;
    ifstream MyFile("sentence.txt");
    if (MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            file_contents += line + "\n";
        }
        MyFile.close();
    }

    for (int i = 0; i < file_contents.length(); i++)
    {
        if (file_contents[i] == 'a' || file_contents[i] == 'e' || file_contents[i] == 'i' || file_contents[i] == 'o' || file_contents[i] == 'u')
        {
            vowels++;
        }
    }

    ofstream outputFile("sentence.txt");
    if (outputFile.is_open())
    {
        outputFile<< file_contents << " " <<  vowels << endl;
        outputFile.close();
    }

    return 0;
}