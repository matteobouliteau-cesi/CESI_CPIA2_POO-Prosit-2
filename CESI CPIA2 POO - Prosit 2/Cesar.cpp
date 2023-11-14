#include "Cesar.h"

Cesar::Cesar(int offset) {
	this->offset = offset;
}

int Cesar::getOffset(void) {
	return this->offset;
}

void Cesar::setOffset(int offset) {
	this->offset = offset;
}
