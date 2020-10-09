void resBr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__4 = new TH1D("__4","Number of sub-runs: 50",1000,-1000,1000);
   __4->SetBinContent(499,21);
   __4->SetBinContent(500,488);
   __4->SetBinContent(501,467);
   __4->SetBinContent(502,24);
   __4->SetEntries(1000);
   __4->SetLineWidth(3);
   __4->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __4->GetXaxis()->CenterTitle(true);
   __4->GetXaxis()->SetLabelFont(42);
   __4->GetXaxis()->SetTitleSize(0.04);
   __4->GetXaxis()->SetTitleOffset(1.1);
   __4->GetXaxis()->SetTitleFont(42);
   __4->GetYaxis()->SetTitle("Experiments");
   __4->GetYaxis()->CenterTitle(true);
   __4->GetYaxis()->SetNdivisions(4000510);
   __4->GetYaxis()->SetLabelFont(42);
   __4->GetYaxis()->SetTitleSize(0.04);
   __4->GetYaxis()->SetTitleOffset(1.1);
   __4->GetYaxis()->SetTitleFont(42);
   __4->GetZaxis()->SetLabelFont(42);
   __4->GetZaxis()->SetTitleOffset(1);
   __4->GetZaxis()->SetTitleFont(42);
   __4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
