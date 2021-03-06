#include "pompe.hh"

using namespace std;
//constructeur
pompe::pompe(){
  id = 0;
  name = 'P'+ to_string(id);
  type = 'N';
  state = true;
  failure = false;
}

pompe::pompe(const pompe &p){
  this->name = p.name;
  this->id = p.id;
  this->type = p.type;
  this->state = p.state;
  this->failure = p.failure;
}

pompe::pompe(int id){
  this->id = id;
  name = 'P'+to_string(this->id);
  type = 'N';
  state = true;
  failure = false;
}

pompe::pompe(int id, bool state){
  this->id = id;
  name = 'P'+to_string(this->id);
  type = 'N';
  this->state = state;
  failure = false;
}

pompe::pompe(int id, bool state, char type){
  this->id = id;
  name = 'P'+to_string(this->id);
  this->type = type;
  this->state = state;
  failure = false;
}

// destructeur

pompe::~pompe(){
 delete this;
}

//getter

string pompe::getName(){
	return this->name;
}
int pompe::getId(){
	return this->id;
}

bool pompe::getState(){
	return this->state;
}

bool pompe::getFailureState(){
	return this->failure;
}

void pompe::setState(bool b){
	this->state = b;
}

void pompe::setFailureState(bool b){
	this->failure = b;
}

void pompe::changeState(){
	if ((this->getState() == true) | (this->getFailureState() == true)){
		this->setState(false);
	}
	else if ((this->getState() == false) & (this->getFailureState() == false)){
		this->setState(true);
	}
}

void pompe::changeFailureState(){
	if (this->getFailureState() == true){
		this->setFailureState(false);
	}
	else{
		this->setFailureState(true);
	}
}

pompe & pompe::operator=(const pompe &p){
  if (this==&p){
    return *this;
  }

  this->name = p.name;
  this->id = p.id;
  this->type = p.type;
  this->state = p.state;
  this->failure = p.failure;

  return *this;
}
