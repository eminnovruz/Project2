#pragma once

class StartUp {
public:

	void Start() {
		Database db(nullptr,1);
		Registration twitter(db);
		User user(1, "Emin1234", "Emin", "novruz");


		twitter.get_DataBase().addUser(user);
		cout << "User count: " << twitter.get_DataBase().get_UserCount();
		twitter.get_DataBase().getUserByUsername(user.get_Name());

		
	}





};