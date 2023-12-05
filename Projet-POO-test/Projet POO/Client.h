#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
class Client
{
public :
	Client();
	Client(std::string new_Nom, std::string new_Prenom, std::string new_Date_de_Naissance, std::string new_Date_premier_achat);
	std::string get_Nom() { return Nom; }
	std::string get_Prenom() { return Prenom; }
	std::string get_Date_de_Naissance() { return Date_de_Naissance; }
	std::string get_Date_premier_achat() { return Date_premier_achat; }

private :
	int ID_Client;
	std::string Nom;
	std::string Prenom;
	std::string Date_de_Naissance;
	std::string Date_premier_achat;

};

#endif