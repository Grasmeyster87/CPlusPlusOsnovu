#include "SimpleTimerMutex165.h"

SimpleTimerMutex165::SimpleTimerMutex165() {

	start = std::chrono::high_resolution_clock::now();
}

SimpleTimerMutex165::~SimpleTimerMutex165() {

	end = std::chrono::high_resolution_clock::now();
	duration = end - start;
	float result = duration.count();
	std::cout << "\tВремя выполнения " << result << "\t секунд" << std::endl;
}
