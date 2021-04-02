#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //char myString[255];

    //cin >> myString;

    //myString[4] = '\0';

    //cout << myString << endl;

    //cin.getline(myString, 255);

    //cout << myString;

    /*int ix = 0;
    while (true)
    {
        if (myString[ix] == '\0') break;
        
        cout << myString[ix] << " " << (int)myString[ix] << endl;
        ++ix;
    }*/

    char source[] = "Copy this!";
    char dest[50];
    //strcpy(dest, source);
    strcpy_s(dest, 50, source); // _s --> secured

    /*cout << source << endl;
    cout << dest << endl;*/

    //strcat();
    //strcmp();

    //strcat(dest, source);
    /*strcat_s(dest, source);
     

    cout << source << endl;
    cout << dest << endl;*/

    cout << strcmp(source, dest) << endl;

    if (strcmp(source, dest) == 0)
    {

    }

    return 0;
}