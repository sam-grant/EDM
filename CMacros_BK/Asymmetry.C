
#include "FancyDraw.h"
#include "TF1.h"

// Not really happy with the formatting, but functions are correct

int main() { 

	// Numbers refer to equations in Saskia's thesis, also see TDR Figure 3.6 amnd 3.7

	// ==================== Define functions ==================== 

	// ==================== Rest frame ====================  
	TF1 *N_1 = new TF1("N_1","0.5 * 2 * x*x * (3-2*x)",0,1); // 3.38
	TF1 *A_1 = new TF1("A_1","(2*x-1) / (3-2*x)",0,1); // 3.39
	TF1 *NA2_1 = new TF1("NA2_1","N_1 * A_1 * A_1",0,1); 

	std::cout<<"\nN_1 max:\t"<<N_1->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"A_1 max:\t"<<A_1->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"NA2_1 max:\t"<<NA2_1->GetMaximum()<<"\n"<<std::endl;

	N_1->GetYaxis()->SetRangeUser(-0.4,1.1);
	N_1->GetXaxis()->SetRangeUser(0,1);
	DrawAsymmetryPlot(N_1, A_1, NA2_1, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_wa_restFrame");

	// ==================== Lab frame ====================  
	TF1 *N_2 = new TF1("N_2","(1/1.65) * 0.33 * (x-1) * (4*x*x-5*x-5)",0,1); // 3.41
	TF1 *A_2 = new TF1("A_2","(1+x-8*x*x) / (4*x*x-5*x-5)",0,1); // 3.42
	TF1 *NA2_2 = new TF1("NA2_2","(1/0.0728538) * N_2 * A_2 * A_2",0,1); 

	std::cout<<"\nN_2 max:\t"<<N_2->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"A_2 max:\t"<<A_2->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"NA2_2 max:\t"<<NA2_2->GetMaximum()<<"\n"<<std::endl;

	N_2->GetYaxis()->SetRangeUser(-0.4,1.1);
	//N_2->GetXaxis()->SetRangeUser(-0.01,1.01);
	DrawAsymmetryPlot(N_2, A_2, NA2_2, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_wa_labFrame");

	// ==================== Lab frame with energy cut ====================
	TF1 *N_3 = new TF1("N_3","(1/0.99) * (0.33) * ((x-1)*(x-1)) * (-(x*x)+x+3)",0,1); // 3.43
	TF1 *A_3 = new TF1("A_3","( x * (2*x + 1) ) / ( -x*x + x + 3 )",0,1); // 3.44
	TF1 *NA2_3 = new TF1("NA2_3","(1/0.0284282) * N_3 * A_3 * A_3",0,1);  

	std::cout<<"\nN_3 max:\t"<<N_3->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"A_3 max:\t"<<A_3->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"NA2_3 max:\t"<<NA2_3->GetMaximum()<<"\n"<<std::endl;

	N_3->GetYaxis()->SetRangeUser(-0.1,1.1);
	//N_3->GetXaxis()->SetRangeUser(-0.01,1.01);
	DrawAsymmetryPlot(N_3, A_3, NA2_3, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_wa_labFrame_eCut");

	// ==================== Lab frame EDM ====================
	// I did some hacky normalisation to make it look like Saskia and Gleb's plots, but I don't understand why 
	TF1 *N_4 = new TF1("N_4","(1/1.65) * 0.33 * (x-1) * (4*x*x-5*x-5)",0,1); // 3.43
	TF1 *A_4 = new TF1("A_4","( 0.5 * (1/0.266991) * (sqrt(x * (1-x)) * (1 + 4*x) ) / (5 + 5*x - 4*x*x) )",0,1); // 3.57
	TF1 *NA2_4 = new TF1("NA2_4"," (1/0.122511) * N_4 * A_4 * A_4",0,1);  

	std::cout<<"\nN_4 max:\t"<<N_4->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"A_3 max:\t"<<A_4->GetMaximum()<<"\n"<<std::endl;
	std::cout<<"NA2_4 max:\t"<<NA2_4->GetMaximum()<<"\n"<<std::endl;

	N_4->GetYaxis()->SetRangeUser(-0.1,1.1);
	//N_4->GetXaxis()->SetRangeUser(-0.01,1.01);
	DrawAsymmetryPlot(N_4, A_4, NA2_4, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_EDM_labFrame");


	return 0;

}




