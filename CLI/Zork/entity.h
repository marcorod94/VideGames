#pragma once
#include <list>
#include <string>


enum class EntityType {
	ENTITY,
	ROOM,
	EXIT,
	ITEM,
	CREATURE,
	PLAYER
};

class Entity {
public:
	Entity(const char* name, const char* description, Entity* parent);
	virtual void Update();
private:
	EntityType type;
	std::string name;
	std::string description;
	Entity* parent;
	std::list<Entity*> contains;
};
