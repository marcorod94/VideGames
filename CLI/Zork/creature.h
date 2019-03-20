#include "entity.h"
#include "room.h"

class Creature : public Entity {
public:
	Room* GetLocation() const;
private:
	Room* location;
};
