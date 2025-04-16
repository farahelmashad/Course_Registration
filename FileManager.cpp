#include "FileManager.h"
#include "GlobalData.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;
void FileManager::readAdmins(string filename) {
	ifstream file(filename);
	string line;

	while (getline(file, line)) {
		stringstream ss(line);
		string username, password;
		getline(ss, username, '|');
		getline(ss, password);
		admins.push_back(Admin(username, password));
	}
	file.close();
}