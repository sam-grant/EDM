void dBr_50()
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
   
   TH1D *__3 = new TH1D("__3","Number of sub-runs: 50",300,-1000,1000);
   __3->SetBinContent(151,1000);
   __3->SetEntries(1000);
   __3->SetLineWidth(3);
   __3->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __3->GetXaxis()->CenterTitle(true);
   __3->GetXaxis()->SetLabelFont(42);
   __3->GetXaxis()->SetTitleSize(0.04);
   __3->GetXaxis()->SetTitleOffset(1.1);
   __3->GetXaxis()->SetTitleFont(42);
   __3->GetYaxis()->SetTitle("Experiments");
   __3->GetYaxis()->CenterTitle(true);
   __3->GetYaxis()->SetNdivisions(4000510);
   __3->GetYaxis()->SetLabelFont(42);
   __3->GetYaxis()->SetTitleSize(0.04);
   __3->GetYaxis()->SetTitleOffset(1.1);
   __3->GetYaxis()->SetTitleFont(42);
   __3->GetZaxis()->SetLabelFont(42);
   __3->GetZaxis()->SetTitleOffset(1);
   __3->GetZaxis()->SetTitleFont(42);
   __3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
