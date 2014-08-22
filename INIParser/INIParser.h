#ifndef INI_PARSER_H
#define INI_PARSER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <map>
#include <set>
using namespace std;

class INIParser
{
public:
    // inner class ININode
    class ININode
    {
    public:
        ININode(string r, string k, string v): root(r), key(k), value(v){}
        string root;
        string key;
        string value;
    };
    // inner class SubNode
    class SubNode
    {
    public:
        void InsertElement(string key, string value)
        {
            sub_node.insert(make_pair(key, value));
        }
        map<string, string> sub_node;
    };

    /** member of class INIParser */
    string& TrimString(string &str);
    int ReadINI(string path);
    string GetValue(string root, string key);
    vector<ININode>::size_type GetSize(){return map_ini.size();}
    vector<ININode>::size_type SetValue(string root, string key, string value);
    int WriteINI(string path);
    void Clear(){map_ini.clear();}
private:
    map<string, SubNode> map_ini;
};

#endif // INI_PARSER_H
