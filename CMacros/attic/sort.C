void sort() { 

	int entrys[] = {0, 12, 18, 18, 12, 0, 18, 129013, 12, 18, 0, 0};
	int n_entries = sizeof(entrys)/sizeof(entrys[0]);

	string stns[] = {"S0S12S18", "S12S18", "S0", "S12", "S18"}; 
	int n_stn = sizeof(stns)/sizeof(stns[0]);

	std::map<std::string, int> stns{ {"S0", 0}, {"S12", }, {"RAM", 20}, };

	for(int i = 0; i < n_stn; i++) { 

		int stn = stns[i];

		cout<<"Station "<<stn<<endl;


	}


	return; 


}