#include "Logical.h"

Logical::Logical(bool* key) {
	this->key = key;
}

bool* Logical::getKey(void) {
	return this->key;
}

void Logical::setKey(bool* key) {
	this->key = key;
}
