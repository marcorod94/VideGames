#include "entity.h"
#include "room.h"

enum class Direction {
	north,
	south,
	east,
	west,
	up,
	down
};

class Exit : public Entity {
private:
	Direction direction;
	Room* source;
	Room* destination;
};
