#pragma once
#include <array>
#include <string>

using namespace std;

//alles mit dem man interagieren kann
class Entity
{
public:
	unsigned int getX() const {return x;}
	unsigned int getY() const { return y; }
private:
	unsigned int x{ 0 }, y{ 0 };
};

class Trainer : public Entity
{
public:
	Trainer()
	{
	}

	void bewegen()
	{}
	void Itembenuetzen()
	{}
private:


};



class Player : public Trainer
{
public:
	void aufBeutelzugreifen()
	{

	}

private:


};

class Enemy : public Trainer
{
};





class Item : protected Entity
{

};

class Gras : private Entity
{

};
