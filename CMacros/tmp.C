
/*#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

	string run = argv[1];
   	cout << "Running\t" <<run<<endl;;

	return 0;
}*/

/*
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
*/
const double n_1 = 0.0826; // 14 kV
const double n_2 = 0.106; // 18 kV

double fVCOD_0(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 1; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( par[0]*cos(0*x[0]) ) * quadFactor_.at(0);

}

double fVCOD_1(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 2; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) );

}

double fVCOD_2(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 3; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) );

}

double fVCOD_3(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 4; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) );

}

double fVCOD_4(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 5; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_5(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 6; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) );
}

double fVCOD_6(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 7; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) );
}

double fVCOD_7(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 8; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) );
}

double fVCOD_8(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 9; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) );
}


double fVCOD_9(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 10; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) );
}

double fVCOD_10(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 11; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) );
}

double fVCOD_11(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 12; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) )
  			+ ( (par[21]*cos(11*x[0])+par[22]*sin(11*x[0])) * quadFactor_.at(11) );
  			
}

// At this point with have more fit parameters than data points so it's a good place to stop.
double fVCOD_12(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 13; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) )
  			+ ( (par[21]*cos(11*x[0])+par[22]*sin(11*x[0])) * quadFactor_.at(11) )
  			+ ( (par[23]*cos(13*x[0])+par[24]*sin(12*x[0])) * quadFactor_.at(12) );

}

	//TF1 *fCOD_4 = new TF1("fCOD_4", "( (-5.34942e-04/0.108) +  (2.52473e-02*cos(x)-4.15501e-02*sin(x))/(1-0.108) + (1.68669e-02*cos(2*x)+5.00699e-02*sin(2*x))/(4-0.108) + (-4.67951e-03*cos(3*x)-3.19857e-01*sin(3*x))/(9-0.108) + (1.23023e-01*cos(4*x)-4.20506e-01*sin(4*x))/(16-0.108) )", xmin, xmax);

void tmp() {

	double xmin = 0;//
	double xmax = 2*TMath::Pi();//


	TF1 *fCOD_0 = new TF1("fVCOD_0", fVCOD_0, xmin, xmax, 1);

/*	fCOD_1->SetParameter(0, 1);
	fCOD_1->SetParameter(1, 1);
	fCOD_1->SetParameter(2, 1);

	TF1 *fCOD_4 = new TF1("fVCOD_4", fVCOD_4, xmin, xmax, 9);

	fCOD_4->SetParameter(0, -5.34942e-04);
	fCOD_4->SetParameter(1, 2.52473e-02);
	fCOD_4->SetParameter(2, -4.15501e-02);
	fCOD_4->SetParameter(3, 1.68669e-02);
	fCOD_4->SetParameter(4, 5.00699e-02);
	fCOD_4->SetParameter(6, -4.67951e-03);
	fCOD_4->SetParameter(7, 3.19857e-01);
	fCOD_4->SetParameter(8, 1.23023e-01);
	fCOD_4->SetParameter(9,-4.20506e-01);

	TCanvas *c = new TCanvas();
	//fCOD_1->GetYaxis()->SetRangeUser(-0.5, 0.5);
	fCOD_4->Draw();
	c->SaveAs("../Images/tmp.png");*/

/*	// TF1 *fCOD = {fCOD_0, fCOD_1, fCOD_2, fCOD_3, fCOD_4, fCOD_5, fCOD_6, fCOD_7, fCOD_8, fCOD_9, fCOD_10};	

	// Denomintators 
	vector<double> quadFactor_;//[11];

	// Set up denominators
	for (int i_order = 0; i_order < 11; i_order++ ) quadFactor_.push_back((1/(pow(i_order,2) - n_18)) - (1/(pow(i_order,2) - n_14)));



//quadFactor_.at(0)
	TF1 *fCOD_0 = new TF1("fCOD_0", " ( [0]*cos(0*x)+sin(0*x) ) * n_14", xmin, xmax);

*/

	return;

}

