void dBr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__13 = new TH1D("__13","Number of sub-runs: 175",300,-1000,1000);
   __13->SetBinContent(151,1000);
   __13->SetEntries(1000);
   __13->SetLineWidth(3);
   __13->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __13->GetXaxis()->CenterTitle(true);
   __13->GetXaxis()->SetLabelFont(42);
   __13->GetXaxis()->SetTitleSize(0.04);
   __13->GetXaxis()->SetTitleOffset(1.1);
   __13->GetXaxis()->SetTitleFont(42);
   __13->GetYaxis()->SetTitle("Experiments");
   __13->GetYaxis()->CenterTitle(true);
   __13->GetYaxis()->SetNdivisions(4000510);
   __13->GetYaxis()->SetLabelFont(42);
   __13->GetYaxis()->SetTitleSize(0.04);
   __13->GetYaxis()->SetTitleOffset(1.1);
   __13->GetYaxis()->SetTitleFont(42);
   __13->GetZaxis()->SetLabelFont(42);
   __13->GetZaxis()->SetTitleOffset(1);
   __13->GetZaxis()->SetTitleFont(42);
   __13->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
