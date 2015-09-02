#include <iostream>

extern "C" {
	void register_callback(void (*callback)(const char*));
}

void
cxx_callback(const char* msg) {
	std::cout 
		<< "this is CXX callback: "
		<< msg
		<< std::endl;
}

extern "C" void 
cxx_module_init() {
	register_callback(cxx_callback);
}

