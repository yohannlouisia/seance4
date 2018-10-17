#include <iostream>
#include <string>
#include <vector>
using namespace std;

class etudiant {
	public:
	string nom;
	string note;

};

int main(){
	vector <etudiant> etudiants;
	//etudiants[0]="yohann";
	//etudiants[1]="guillaume";
	//etudiants[2]="ganesh";
	string tmp_nom;
	string tmp_note;
	for (int i = 0;i<3;i++){

	cout << "Entrez le nom d'un etudiant" << endl;
	cin >> tmp_nom;
	cout << "Entrez sa note" << endl;
	cin >> tmp_note;
	etudiants.push_back(etudiant());
	etudiants[i].nom = tmp_nom;
	etudiants[i].note = tmp_note;


	}
	cout << "La note de quel etudiant voulez vous voir ?" << endl;
	cin >> tmp_nom;
	for(int i=0; i<etudiants.size();i++){
		if (tmp_nom==etudiants[i].nom){
			cout << etudiants[i].note << endl;
		}
	}
	/*cout << "La liste des etudiants :" << endl;
	for(int i=0;i<etudiants.size();i++){
	cout<< etudiants[i].nom << " "<< etudiants[i].note << endl;

	}*/
	return 0;

}
