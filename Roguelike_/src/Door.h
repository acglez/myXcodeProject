#include "ConstructorPart.h"

class Door: public ConstructorPart {
private:
	int cord_x;
	int cord_y;
public:
	Door(int&,int&);
	~Door();
	int getCoord_x();
	int gerCoord_y();
	/* data */
};