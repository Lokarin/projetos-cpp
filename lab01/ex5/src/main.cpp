//#include <iostream>
#include "televisao.h"

void example(){
	Televisao tv;
	tv.printVolume();
	tv.printCanal();

	tv.aumentaVolume();
	tv.aumentaVolume();
	tv.aumentaVolume();
	tv.aumentaVolume();

	tv.printVolume();

	tv.diminuiCanal();
	tv.aumentaCanal();
	tv.aumentaCanal();
	tv.aumentaCanal();
	tv.aumentaCanal();
	tv.aumentaCanal();

	tv.printCanal();

	tv.diminuiCanal();
	tv.diminuiCanal();
	tv.diminuiCanal();

	tv.printCanal();

	tv.goToCanal(151);

	tv.printCanal();

	tv.goToCanal(66);

	tv.printCanal();
}

int main() {
	example();

	return 0;
}
