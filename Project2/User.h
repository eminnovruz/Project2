#pragma once

class User {
private:
	
	int id;
	string password;
	string name;
	string surname;

public:
	
	User() = default;

	User(int id,string password,string name,string surname)
	{
		this->id = id;
		this->password = password;
		this->name = name;
		this->surname = surname;
	}

	void show() const {
	
		cout << "----- User -----" << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Password: ********" << endl;
		cout << "Id: " << id << endl;
	}
	
	string get_Name() const {
		return name;
	}

	string get_Password() const {
		return password;
	}

};
