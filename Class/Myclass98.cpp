#include "Myclass98.h"




    Msg98::Msg98(string msg)
    {
        this->msg = msg;
    }
    string Msg98::GetMsg()
    {
        return msg;
    }
   

    
    string  BreketsMsg98::GetMsg() 
    {
        return "[" + Msg98::Msg98::GetMsg() + "]";
    }
    


    void Printer98::Print(Msg98* msg)
    {
        cout << msg->GetMsg() << endl;
    }
    