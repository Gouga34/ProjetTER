#include "alignement.h"



Alignement::Alignement(int lignes, int colonnes){
	this->lignes = lignes;
	this->colonnes = colonnes;
	this->mat = new int*[lignes];
	for(int i=0;i<lignes;i++){
		this->mat[i]=new int[colonnes];
	}
}

Alignement::~Alignement(){
	for(int i =0; i<this->lignes;i++){
		delete [] this->mat[i];
	}
	delete [] this->mat;
}


int Alignement::getElement(int i,int j) const{
	return this->mat[i][j];
}

int Alignement::getResultat() const{
	return this->mat[this->lignes-1][this->colonnes-1];
}


void Alignement::setElement(int i, int j, int val){
	this->mat[i][j] = val;
}