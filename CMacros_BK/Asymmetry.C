
#include "FancyDraw.h"
#include "TF1.h"

// Not really happy with the formatting, but functions are correct


/////// JUST DOING SOME TESTING HERE /////////
void DrawAsymmetryPlot2(TF1 *N, TF1 *A, TF1 *NA2, std::string title, std::string fname) {

	double mMu = 105.6583715; // MeV
	double aMu = 11659208.9e-10; 
	double gmagic = std::sqrt( 1.+1./aMu );
	double pmax = 1.01 * mMu * gmagic;

	std::cout<<"pmax\t:"<< pmax <<std::endl;
	std::cout<<"Low cut\t:"<< 0.3 * pmax <<std::endl;
	std::cout<<"High cut\t:"<< 0.75 * pmax <<std::endl;

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);
	// TLegend *leg = new TLegend(0.25,0.69,0.45,0.89);
	// TODO: Make legend not look like a pile of shit
	TLegend *leg = new TLegend(0.81,0.35,0.99,0.65);// 0.15,0.65,0.35,0.85);
	leg->SetBorderSize(0);
	
	TLine *y_0 = new TLine(0,0,1,0);
	
	leg->AddEntry(N," N(y)");
	leg->AddEntry(A," A(y)");
	leg->AddEntry(NA2," NA(y)");

	leg->SetTextSize(26);
	leg->SetTextFont(44);

	// Add text 
	TPaveText *N_txt = new TPaveText(0.30,0.80,0.40,0.89,"NDC");
	N_txt->AddText("N(y)");


	N->SetTitle(title.c_str());		
	N->GetXaxis()->SetTitleSize(.04);
	N->GetYaxis()->SetTitleSize(.04);
	N->GetXaxis()->SetTitleOffset(1.1);
	N->GetYaxis()->SetTitleOffset(1.1);
	N->GetXaxis()->CenterTitle(1);
	N->GetYaxis()->CenterTitle(1);
	N->GetYaxis()->SetMaxDigits(4);

	N->SetLineColor(kBlack);
	A->SetLineColor(kRed);
	NA2->SetLineColor(kBlue);

	N->SetLineWidth(3);
	A->SetLineWidth(3);
	NA2->SetLineWidth(3);
	y_0->SetLineWidth(3);

	y_0->SetLineStyle(2);

	//c->SetRightMargin(0.13);

	N->Draw();
	leg->Draw("same");
	A->Draw("same");
	NA2->Draw("same");
	y_0->Draw("same");
	//N_txt->Draw("same");

	gPad->Update();

	// Second axis
	TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),0,pmax,510,"-");
	axis->SetTitle("Track momentum [MeV]");
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);

	axis->Draw("same");
	
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawAsymmetryPlot3(TF1 *N, TF1 *A, TF1 *NA2, std::string title, std::string fname) {

	double mMu = 105.6583715; // MeV
	double aMu = 11659208.9e-10; 
	double gmagic = std::sqrt( 1.+1./aMu );
	double pmax = 1.01 * mMu * gmagic;

	std::cout<<"pmax\t:"<< pmax <<std::endl;
	std::cout<<"Low cut\t:"<< 0.3 * pmax <<std::endl;
	std::cout<<"High cut\t:"<< 0.75 * pmax <<std::endl;

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);
	// TLegend *leg = new TLegend(0.25,0.69,0.45,0.89);
	// TODO: Make legend not look like a pile of shit
	TLegend *leg = new TLegend(0.81,0.35,0.99,0.65);// 0.15,0.65,0.35,0.85);
	leg->SetBorderSize(0);
	
	TLine *y_0 = new TLine(0,0,1,0);
	
	leg->AddEntry(N," N(y)");
	leg->AddEntry(A," A(y)");
	leg->AddEntry(NA2," N^{2}A(y)");

	leg->SetTextSize(26);
	leg->SetTextFont(44);

	// Add text 
	TPaveText *N_txt = new TPaveText(0.30,0.80,0.40,0.89,"NDC");
	N_txt->AddText("N(y)");


	N->SetTitle(title.c_str());		
	N->GetXaxis()->SetTitleSize(.04);
	N->GetYaxis()->SetTitleSize(.04);
	N->GetXaxis()->SetTitleOffset(1.1);
	N->GetYaxis()->SetTitleOffset(1.1);
	N->GetXaxis()->CenterTitle(1);
	N->GetYaxis()->CenterTitle(1);
	N->GetYaxis()->SetMaxDigits(4);

	N->SetLineColor(kBlack);
	A->SetLineColor(kRed);
	NA2->SetLineColor(kBlue);

	N->SetLineWidth(3);
	A->SetLineWidth(3);
	NA2->SetLineWidth(3);
	y_0->SetLineWidth(3);

	y_0->SetLineStyle(2);

	//c->SetRightMargin(0.13);

	N->Draw();
	leg->Draw("same");
	A->Draw("same");
	NA2->Draw("same");
	y_0->Draw("same");
	//N_txt->Draw("same");

	gPad->Update();

	// Second axis
	TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),0,pmax,510,"-");
	axis->SetTitle("Track momentum [MeV]");
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);

	axis->Draw("same");
	
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawAsymmetryPlot4(TF1 *N, TF1 *A, TF1 *NA2, std::string title, std::string fname) {

	double mMu = 105.6583715; // MeV
	double aMu = 11659208.9e-10; 
	double gmagic = std::sqrt( 1.+1./aMu );
	double pmax = 1.01 * mMu * gmagic;

	std::cout<<"pmax\t:"<< pmax <<std::endl;
	std::cout<<"Low cut\t:"<< 0.3 * pmax <<std::endl;
	std::cout<<"High cut\t:"<< 0.75 * pmax <<std::endl;

	TCanvas *c = new TCanvas("c","c",500,350);//800,600);
	//c->SetRightMargin(0.20);
	// TLegend *leg = new TLegend(0.25,0.69,0.45,0.89);
	// TODO: Make legend not look like a pile of shit
	//TLegend *leg = new TLegend(0.81,0.35,0.99,0.65);// 0.15,0.65,0.35,0.85);
	TLegend *leg = new TLegend(0.75,.55, .89, .89);//,0.35,0.99,0.65);// 0.15,0.65,0.35,0.85);
	leg->SetBorderSize(0);
	
	TLine *y_0 = new TLine(0,0,1,0);
	
	leg->AddEntry(N," N(y)");
	leg->AddEntry(A," A(y)");
	leg->AddEntry(NA2," NA^{2}(y)");

	//leg->SetTextSize(26);
	//leg->SetTextFont(44);

	// Add text 
	TPaveText *N_txt = new TPaveText(0.30,0.80,0.40,0.89,"NDC");
	N_txt->AddText("N(y)");


	N->SetTitle(title.c_str());		
	N->GetXaxis()->SetTitleSize(.04);
	N->GetYaxis()->SetTitleSize(.04);
	N->GetXaxis()->SetTitleOffset(1.1);
	N->GetYaxis()->SetTitleOffset(1.1);
	N->GetXaxis()->CenterTitle(1);
	N->GetYaxis()->CenterTitle(1);
	N->GetYaxis()->SetMaxDigits(4);

	N->SetLineColor(kBlack);
	A->SetLineColor(kRed);
	NA2->SetLineColor(kBlue);

	N->SetLineWidth(3);
	A->SetLineWidth(3);
	NA2->SetLineWidth(3);
	y_0->SetLineWidth(3);

	y_0->SetLineStyle(2);

	//c->SetRightMargin(0.13);

	N->Draw();
	leg->Draw("same");
	A->Draw("same");
	NA2->Draw("same");
	y_0->Draw("same");
	//N_txt->Draw("same");

	gPad->Update();

	// Second axis
	TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),0,pmax,510,"-");
	axis->SetTitle("Track momentum [MeV]");
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);

	axis->Draw("same");
	
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}
////////////////////////////
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


	// ==================== Lab frame EDM ====================
	//N_4->GetXaxis()->SetRangeUser(-0.01,1.01);
	DrawAsymmetryPlot4(N_4, A_4, NA2_4, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_EDM_labFrame_redraw");

//
//	// ==================== Lab frame NA ====================
//	// I did some hacky normalisation to make it look like Saskia and Gleb's plots, but I don't understand why 
//	//TF1 *N_5 = new TF1("N_5","(1/1.65) * 0.33 * (x-1) * (4*x*x-5*x-5)",0,1); // 3.43
//	//TF1 *A_5 = new TF1("A_5","(1+x-8*x*x) / (4*x*x-5*x-5)",0,1); // 3.42
//	//TF1 *NA2_5 = new TF1("NA2_5"," (1/0.122511) * N_4 * A_4 * A_4 ",0,1);  
//	TF1 *NA_5 = new TF1("NA_5"," (1/0.287487) * N_4 * A_4 ",0,1);  
//
//	//**/std::cout<<"\nN_5 max:\t"<<N_5->GetMaximum()<<"\n"<<std::endl;
//	//**/std::cout<<"A_5 max:\t"<<A_5->GetMaximum()<<"\n"<<std::endl;
//	std::cout<<"NA_5 max:\t"<<NA_5->GetMaximum()<<"\n"<<std::endl;
//
//	//N_5->GetYaxis()->SetRangeUser(-0.1,1.1);
//	//N_4->GetXaxis()->SetRangeUser(-0.01,1.01);
//	DrawAsymmetryPlot2(N_4, A_4, NA_5, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_EDM_NA_labFrame");
//
//	// ==================== Lab frame N^2A ====================
//	// I did some hacky normalisation to make it look like Saskia and Gleb's plots, but I don't understand why 
//	//TF1 *N_5 = new TF1("N_5","(1/1.65) * 0.33 * (x-1) * (4*x*x-5*x-5)",0,1); // 3.43
//	//TF1 *A_5 = new TF1("A_5","(1+x-8*x*x) / (4*x*x-5*x-5)",0,1); // 3.42
//	//TF1 *NA2_5 = new TF1("NA2_5"," (1/0.122511) * N_4 * A_4 * A_4 ",0,1);  
//	TF1 *NA_6 = new TF1("NA_6"," (1/0.228061) * N_4 * N_4 * A_4 ",0,1);  
//
//	//**/std::cout<<"\nN_5 max:\t"<<N_5->GetMaximum()<<"\n"<<std::endl;
//	//**/std::cout<<"A_5 max:\t"<<A_5->GetMaximum()<<"\n"<<std::endl;
//	std::cout<<"NA_6 max:\t"<<NA_6->GetMaximum()<<"\n"<<std::endl;
//
//	//N_5->GetYaxis()->SetRangeUser(-0.1,1.1);
//	//N_4->GetXaxis()->SetRangeUser(-0.01,1.01);
//	DrawAsymmetryPlot3(N_4, A_4, NA_6, ";y=p/p_{max};Arbitrary units" ,"../Images/Asymmetry/Asymmetry_EDM_N2A_labFrame");




	return 0;

}




