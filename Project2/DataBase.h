#pragma once


class Database {
private:
	
	User** users = nullptr;
	int user_count = 0;
public:

	Database() = default;

	Database(User** users,int user_count) {

		this->users = users;
		this->user_count = user_count;
	}

	bool find_user_sign(string username, string password) {

		for (size_t i = 0; i < user_count; i++)
		{
			if (users[i]->get_Name() == username && users[i]->get_Password() == password) {
				return true;
			}

		}

		return false;

	}


	void addUser(User& user) {

		User** users_temp = new User * [user_count + 1];

		for (size_t i = 0; i < user_count; i++)
		{
			users_temp[i] = users[i];
		}

		users_temp[user_count++] = &user;

		delete[] users;

		users = users_temp;
		delete[] users_temp;

	};
	
	
	User& getUserByUsername(string username) {

		for (size_t i = 0; i < user_count; i++)
		{
			if (users[i]->get_Name() == username) {
				return *users[i];
			}
		}

		throw "Cant find user!";


	};
	
	void updateUser(User& olduser, User& newuser) {

		for (size_t i = 0; i < user_count; i++)
		{
			if (users[i] == &olduser) {
				users[i] = &newuser;
				return;
			}
		}

		throw "Cant find user for update !";
	};

	int get_UserCount() const {
		return user_count;
	}

};