#include "pancakehousemenuiterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(list<MenuItem*> items) {
	position = 0;
	this->items = items;
}

void* PancakeHouseMenuIterator::next() {
	list<MenuItem*>::iterator is = items.begin();
	std::advance(it, position);
	void* object = static_cast<void*>(*it);
	position = position + 1;
	return object;
}

bool PancakeHouseMenuIterator::hasNext() {
    if (position >= items.size()) {
	    return false;
	} else {
		return true;
	}
}	