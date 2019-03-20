#include "entity.h"
#include <vector>

class World {
public:
	std::vector<Entity*> GetEntities();
private:
	std::vector<Entity*> entities;
};
