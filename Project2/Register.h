#pragma once

class Registration {
	Database database;
public:
	
	Registration() = default;


	Registration(const Database& database) {
		this->database = database;
	}

	Database get_DataBase() {
		return database;
	}
	
	void signIn(string username, string password) {

		if (database.find_user_sign(username, password) == true) {
			cout << "Correctly signed !" << endl;
			return;
		}

		throw "Cant sign | Your password or Your name is not correct";
	};


	
	void signUp(string password, string name, string surname) {

		if (name.length() <= 6 && password.length() <=  6) { throw "Invalid username"; }
		if (name[0] >= 97) { throw "Invalid username"; }
		if (surname.length() <= 4) { throw "Invalid username"; }
	};
};