void resBr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__12 = new TH1D("__12","Number of sub-runs: 150",1000,-1000,1000);
   __12->SetBinContent(500,510);
   __12->SetBinContent(501,489);
   __12->SetBinContent(502,1);
   __12->SetEntries(1000);
   __12->SetLineWidth(3);
   __12->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __12->GetXaxis()->CenterTitle(true);
   __12->GetXaxis()->SetLabelFont(42);
   __12->GetXaxis()->SetTitleSize(0.04);
   __12->GetXaxis()->SetTitleOffset(1.1);
   __12->GetXaxis()->SetTitleFont(42);
   __12->GetYaxis()->SetTitle("Experiments");
   __12->GetYaxis()->CenterTitle(true);
   __12->GetYaxis()->SetNdivisions(4000510);
   __12->GetYaxis()->SetLabelFont(42);
   __12->GetYaxis()->SetTitleSize(0.04);
   __12->GetYaxis()->SetTitleOffset(1.1);
   __12->GetYaxis()->SetTitleFont(42);
   __12->GetZaxis()->SetLabelFont(42);
   __12->GetZaxis()->SetTitleOffset(1);
   __12->GetZaxis()->SetTitleFont(42);
   __12->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
