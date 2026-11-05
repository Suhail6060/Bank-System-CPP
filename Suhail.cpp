#include "clsLoginScreen.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    while (true)
    {
        if (!clsLoginScreen::ShowLoginScreen())
            break;
    }
    

    

    system("pause>nul");
    return 0;
}