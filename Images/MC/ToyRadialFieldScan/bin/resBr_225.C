void resBr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__18 = new TH1D("__18","Number of sub-runs: 225",1000,-1000,1000);
   __18->SetBinContent(500,487);
   __18->SetBinContent(501,513);
   __18->SetEntries(1000);
   __18->SetLineWidth(3);
   __18->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __18->GetXaxis()->CenterTitle(true);
   __18->GetXaxis()->SetLabelFont(42);
   __18->GetXaxis()->SetTitleSize(0.04);
   __18->GetXaxis()->SetTitleOffset(1.1);
   __18->GetXaxis()->SetTitleFont(42);
   __18->GetYaxis()->SetTitle("Experiments");
   __18->GetYaxis()->CenterTitle(true);
   __18->GetYaxis()->SetNdivisions(4000510);
   __18->GetYaxis()->SetLabelFont(42);
   __18->GetYaxis()->SetTitleSize(0.04);
   __18->GetYaxis()->SetTitleOffset(1.1);
   __18->GetYaxis()->SetTitleFont(42);
   __18->GetZaxis()->SetLabelFont(42);
   __18->GetZaxis()->SetTitleOffset(1);
   __18->GetZaxis()->SetTitleFont(42);
   __18->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
