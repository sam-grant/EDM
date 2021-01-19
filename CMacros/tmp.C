
/*#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

	string run = argv[1];
   	cout << "Running\t" <<run<<endl;;

	return 0;
}*/

tuple<vector<double>, vector<double>> ReadYPos(string input, string output) {

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	vector<double> yPos; vector<double> eyPos;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy = (TH1D*)f1->Get( ("PerCalo/hy_"+to_string(i_calo+1)).c_str() );//hy->Clone();

		yPos.push_back(hy->GetMean());
		eyPos.push_back(hy->GetMeanError());

		cout<<hy->GetMean()<<"±"<<hy->GetMeanError()<<endl;

	}

	return make_tuple(yPos,eyPos);

}

void tmp() {

	
	tuple<vector<double>, vector<double>> test = ReadYPos("../Plots/Data/ClosedOrbit/reprocessed/merged/y-pos_37884-37885.root","poo");


	return;

}

