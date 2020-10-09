void resBr_300()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__24 = new TH1D("__24","Number of sub-runs: 300",1000,-1000,1000);
   __24->SetBinContent(500,520);
   __24->SetBinContent(501,480);
   __24->SetEntries(1000);
   __24->SetLineWidth(3);
   __24->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __24->GetXaxis()->CenterTitle(true);
   __24->GetXaxis()->SetLabelFont(42);
   __24->GetXaxis()->SetTitleSize(0.04);
   __24->GetXaxis()->SetTitleOffset(1.1);
   __24->GetXaxis()->SetTitleFont(42);
   __24->GetYaxis()->SetTitle("Experiments");
   __24->GetYaxis()->CenterTitle(true);
   __24->GetYaxis()->SetNdivisions(4000510);
   __24->GetYaxis()->SetLabelFont(42);
   __24->GetYaxis()->SetTitleSize(0.04);
   __24->GetYaxis()->SetTitleOffset(1.1);
   __24->GetYaxis()->SetTitleFont(42);
   __24->GetZaxis()->SetLabelFont(42);
   __24->GetZaxis()->SetTitleOffset(1);
   __24->GetZaxis()->SetTitleFont(42);
   __24->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
