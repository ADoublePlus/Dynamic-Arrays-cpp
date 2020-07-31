#include "Text_Tester.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    while (argc > 1)
    {
        switch (argv[--argc][0])
        {
            case 'a':
            {
                Text_Tester t;
                t.testResize();
            }

            break;

            case 'b':
            {
                Text_Tester t;
                t.testReadText();
            }

            break;

            case 'c':
            {
                Text_Tester t;
                t.testAppendText();
            }

            break;

            case 'd':
            {
                Text_Tester t;
                t.testDeleteWordAll();
            }

            break;

            default:
            {
                cout << "Options are a -- d." << endl;
            }

            break;
        }
    }

    return 0;
}