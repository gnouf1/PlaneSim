#include <cstring>
#include <iostream>
#include <fstream>
#include "systeme.hh"
#include <ctime>

using namespace std;

class sauvegarde{
  /*
    L'objet sauvegarde permet d'enrengistrer l'historique et la note.
  */
  private:
    string username;
    int note; // entre 0 et 10
    string historique;
    systeme *S_Save;

  public:

    sauvegarde();

    ~sauvegarde();

    // getters
    int getNote();
    string getHistorique();
    systeme* getSsave();
    string getUsername();

    // setters
    void setNote(int n);
    void setHistorique(string h);
    void setSsave(systeme *s);
    void setUsername(string s);

    // Méthodes
    void addAction(string s);
    void sauvegarder();
    void load(string filename);
};
