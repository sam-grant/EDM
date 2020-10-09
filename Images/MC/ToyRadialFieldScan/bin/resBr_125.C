void resBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__10 = new TH1D("__10","Number of sub-runs: 125",1000,-1000,1000);
   __10->SetBinContent(499,2);
   __10->SetBinContent(500,505);
   __10->SetBinContent(501,492);
   __10->SetBinContent(502,1);
   __10->SetEntries(1000);
   __10->SetLineWidth(3);
   __10->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __10->GetXaxis()->CenterTitle(true);
   __10->GetXaxis()->SetLabelFont(42);
   __10->GetXaxis()->SetTitleSize(0.04);
   __10->GetXaxis()->SetTitleOffset(1.1);
   __10->GetXaxis()->SetTitleFont(42);
   __10->GetYaxis()->SetTitle("Experiments");
   __10->GetYaxis()->CenterTitle(true);
   __10->GetYaxis()->SetNdivisions(4000510);
   __10->GetYaxis()->SetLabelFont(42);
   __10->GetYaxis()->SetTitleSize(0.04);
   __10->GetYaxis()->SetTitleOffset(1.1);
   __10->GetYaxis()->SetTitleFont(42);
   __10->GetZaxis()->SetLabelFont(42);
   __10->GetZaxis()->SetTitleOffset(1);
   __10->GetZaxis()->SetTitleFont(42);
   __10->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
