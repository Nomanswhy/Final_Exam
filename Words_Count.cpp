#include <iostream>
using namespace std;

int main()
{

    string phrase;

    cout << "Please enter a phrase > " << flush;
    getline(cin, phrase);

    int space_count = 0;

    for (int i = 0; phrase[i] != '\0'; i++)
    {

        if (phrase[i] == ' ' || phrase[i] == '\t' || phrase[i] == '\n')
        {

            space_count++;
        }
    }

    cout << "The number of words in phrase: " << space_count + 1 << flush;

    return 0;
}