#ifndef USUARIO_H
#define USUARIO_H
#include <string>

using std::string;

class Usuario{
	string username;
	string password;
public:
	Usuario(string,string);
	Usuario(const Usuario&);
	string getUsername()const;
	string getPassword()const;
    string toString()const;
};
#endif
