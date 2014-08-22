INIParser
=========

The ini file(a configured file) parser of library by C++.  The Windows/Linux/Mac supporting!    

1.Assumption a ini file named conf.ini, as follows:    
[default]   
server_ip = 127.0.0.1   
server_port = 8800  
[other]   
client_num = 10 

2.Using INIParser read and parse conf.ini, for example:    
INIParser ini_parser;   
ini_parser.ReadINI("conf.ini"); // read and parse conf.ini  
// return a string, the outcome is 8800 
cout << ini_parser.GetValue("default", "server_port") << endl;  
cout << ini_parser.GetValue("other", "client_num") << endl; 
// clear    
ini_parser.Clear(); 
cout << ini_parser.GetSize() << endl;   
    
3.Using INIParser write a ini file, for example:   
INIParser ini_wrt;  
ini_wrt.SetValue("course1","name","math");  
ini_wrt.SetValue("course1","prof","Hans");  
ini_wrt.SetValue("course1","credit","5.0"); 
ini_wrt.SetValue("course2","name","writing");   
ini_wrt.SetValue("course2","prof","Lisa");  
ini_wrt.SetValue("course2","credit","3.0");   
ini_wrt.WriteINI("test.ini");   
    
/* test.ini */  
[course1]   
credit=5.0  
name=math   
prof=Hans   
[course2]   
credit=3.0  
name=writing    
prof=Lisa   
