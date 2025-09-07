#include "Utils.h"

void VerfiyTilt() {

	TFile *fin = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/muonBeamAna.root");

	TGraphErrors *gr = (TGraphErrors*)fin->Get("MRF/mod_poly_t");

	gr->GetXaxis()->SetRangeUser(0, G2PERIOD*1e3);
	gr->GetYaxis()->SetRangeUser(-0.075, 0.075);

	TCanvas *c = new TCanvas("c","c",800,600);

	gr->SetTitle(";t_{g#minus2}^{mod} [ns];Vertical polarisation [rad]");
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.2);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->SetMarkerStyle(20); //  Full circle

	// Fit
	SimpleEDMFit(gr, 0.05, OMEGA_A*1e-3, 0, 0, G2PERIOD*1e3);

	gr->Draw("AP");

	TF1 *fit = gr->GetFunction("SimpleEDMFunc");
	fit->SetLineWidth(3);
	fit->SetLineColor(kRed);
	fit->Draw("SAME");

	double chi2ndf = fit->GetChisquare() / fit->GetNDF();
	double par0 = fit->GetParameter(0); double err0 = fit->GetParError(0);
	double par1 = fit->GetParameter(1); double err1 = fit->GetParError(1);
	double par2 = fit->GetParameter(2); double err2 = fit->GetParError(2);
	//double par3 = fit->GetParameter(3); double err3 = fit->GetParError(3);
	//double par4 = fit->GetParameter(4); double err4 = fit->GetParError(4);

	TLegend *leg = new TLegend(0.15,0.15,0.60,0.25);//0.25);
	leg->SetNColumns(1);
	leg->AddEntry(gr, "Sim");
	leg->AddEntry(fit, "#delta* sin(#omega_{a}t+#phi) #plus c");
	leg->SetBorderSize(0);

	leg->Draw("SAME");

	TPaveText *names = new TPaveText(0.57,0.755,0.67,0.88,"NDC");

	names->SetTextAlign(13);
	names->AddText("#delta* [mrad]");
	names->AddText("c [mrad]"); 

	TPaveText *values = new TPaveText(0.74,0.75,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	//values->AddText(Round(1e3*par0, 1)+"#pm"+Round(1e3*err0, 1));
	values->AddText(Round(1e3*par0, 3)+"#pm"+Round(1e3*err0, 1));
	values->AddText(Round(1e3*par2, 1)+"#pm"+Round(1e3*err2, 1));

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);

	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);

	names->Draw("SAME");
	values->Draw("SAME");

	c->SaveAs("../Images/MC/dMu/5.4e-18/Verify/MRF_mod_poly.pdf");
	c->SaveAs("../Images/MC/dMu/5.4e-18/Verify/MRF_mod_poly.png");

	fin->Close();

	cout<<"\n---> Tilt is "<<1e3*par0<<"±"<<1e3*err0<<" mrad in MRF, tilt in LAB is "<<1e3*par0/GMAGIC<<"±"<<1e3*err0/GMAGIC<<" mrad"<<endl;

	return;

}