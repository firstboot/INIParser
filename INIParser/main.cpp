#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <map>
#include "INIParser.h"
using namespace std;


int main()
{
    INIParser ini_parser;
    ini_parser.ReadINI("conf.ini");
    cout << ini_parser.GetValue("default", "server_port") << endl;
    cout << ini_parser.GetValue("other", "client_num") << endl;
    ini_parser.Clear();
    cout << ini_parser.GetSize() << endl;

    INIParser ini_wrt;
    ini_wrt.SetValue("course1","name","math");
    ini_wrt.SetValue("course1","prof","Hans");
    ini_wrt.SetValue("course1","credit","5.0");
    ini_wrt.SetValue("course2","name","writing");
    ini_wrt.SetValue("course2","prof","Lisa");
    ini_wrt.SetValue("course2","credit","3.0");
    ini_wrt.WriteINI("test.ini");
    ini_wrt.Clear();

    return 0;
}
