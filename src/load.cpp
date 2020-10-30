#include <meshparse/mesh.h>

#include <iostream>
#include <fstream>

#include "objparse.h"

namespace meshparse {

	using std::cout;
	using std::endl;
	using std::ifstream;
	using std::string;

	bool load_mesh(const string& filename, ifstream& input, mesh& mesh) {
		string ext = filename.substr(filename.find_last_of('.') + 1);
		if (ext == "stl") {
			return false;
		}
		else if (ext == "obj") {
			return load_obj(input, mesh);
		}
		cout << "Unknown file type " << ext << endl;
		return false;
	}

}
