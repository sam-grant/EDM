void dBr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__7 = new TH1D("__7","Number of sub-runs: 100",300,-1000,1000);
   __7->SetBinContent(151,1000);
   __7->SetEntries(1000);
   __7->SetLineWidth(3);
   __7->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __7->GetXaxis()->CenterTitle(true);
   __7->GetXaxis()->SetLabelFont(42);
   __7->GetXaxis()->SetTitleSize(0.04);
   __7->GetXaxis()->SetTitleOffset(1.1);
   __7->GetXaxis()->SetTitleFont(42);
   __7->GetYaxis()->SetTitle("Experiments");
   __7->GetYaxis()->CenterTitle(true);
   __7->GetYaxis()->SetNdivisions(4000510);
   __7->GetYaxis()->SetLabelFont(42);
   __7->GetYaxis()->SetTitleSize(0.04);
   __7->GetYaxis()->SetTitleOffset(1.1);
   __7->GetYaxis()->SetTitleFont(42);
   __7->GetZaxis()->SetLabelFont(42);
   __7->GetZaxis()->SetTitleOffset(1);
   __7->GetZaxis()->SetTitleFont(42);
   __7->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
