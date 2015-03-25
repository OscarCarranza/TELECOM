#include "Usuario.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

	Usuario::Usuario(string username,string password):username(username),password(password){

	}
	Usuario::Usuario(const Usuario& user):username(user.username),password(user.password){

	}
	string Usuario::getUsername()const{
		return username;
	}

	string Usuario::getPassword()const{
		return password;
	}

    string Usuario::toString()const{
        stringstream ss;
        ss << "User: " << username << " Password" << password;
        return ss.str();
    }
