#include "Myclass68.h"

//68(65 ”казатель на функцию в качестве параметра)----------------------------------------------------------------------------------------------------------------------------

string GetDatafromBD()
{
    return "Data from BD";
}

string GetDatafromWebserver()
{
    return "Data from Web server";
}

string GetDataAstral()
{
    return "Data from Astral";
}

void showinfo(string(*functions)())
{
    cout << functions() << endl;
}
