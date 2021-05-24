
#include <fstream>
#include <time.h>
#include <iostream>
#include "PageEngine.h"
#include "json.hpp"

USING_YJJ_NAMESPACE

int main()
{
	PageEngine engine;

	engine.set_freq(1);
	engine.add_task(PstBasePtr(new PstTempPage(&engine)));
	engine.start();
	return 0;
}
