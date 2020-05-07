#ifndef PLANTE_H
#define CARTE_H
#include <string>

class Plante{
    
    protected:
    
    std::string _nom;
    std::string _espece;
    int _maturite;
    int _taille;
    int _hydratation;
    int _sante;
    int _engrais;
    int _arrose;
    int _coupe;
    
    
    public:
    
    void  virtual affiche();
    Plante(int cout, std::string nom, std::string espece);
};

#endif