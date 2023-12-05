#include "Client.h"
#include <iostream>
using namespace std;



Client::Client() : Nom(""), Prenom(""), Date_de_Naissance(0), Date_premier_achat(0)
{
    
}
Client::Client(std::string new_Nom, std::string new_Prenom, std::string new_Date_de_Naissance, std::string new_Date_premier_achat)
{
    Nom = new_Nom;
    Prenom = new_Prenom;
    Date_de_Naissance = new_Date_de_Naissance;
    Date_premier_achat = new_Date_premier_achat;

}