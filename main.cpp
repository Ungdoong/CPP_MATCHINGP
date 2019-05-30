#include "main.h"

int main() {
	Program program = Program();
	try {
		program.Run();
	}
	catch (exception& e) {
		cerr << "Exception : " << e.what() << endl;
	}
}