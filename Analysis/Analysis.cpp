#include <iostream>
#include "Analysis.h"
using namespace std;

// istruzioni di controllo nidificate nel codice
void Analysis::processExamResults()
{
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

/*   int i= 1;
   for (; i <=10; )
   {cout<< i << " ";
    i++;}*/

    while( studentCounter <= 10 )
    {
        cout << "Enter result ( 1 = pass, 2 = fail ): ";
        cin >> result;

        if( result == 1 )
            passes++;
        else
            failures++;

        studentCounter++;
    }

    cout << "Passed " << passes << "\nFailed " << failures << endl;
    if( passes > 8 )
        cout << "Raise tuition! " << endl;


}
