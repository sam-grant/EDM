void dBr_25()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:36 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__1 = new TH1D("__1","Number of sub-runs: 25",300,-1000,1000);
   __1->SetBinContent(151,1000);
   __1->SetEntries(1000);
   __1->SetLineWidth(3);
   __1->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __1->GetXaxis()->CenterTitle(true);
   __1->GetXaxis()->SetLabelFont(42);
   __1->GetXaxis()->SetTitleSize(0.04);
   __1->GetXaxis()->SetTitleOffset(1.1);
   __1->GetXaxis()->SetTitleFont(42);
   __1->GetYaxis()->SetTitle("Experiments");
   __1->GetYaxis()->CenterTitle(true);
   __1->GetYaxis()->SetNdivisions(4000510);
   __1->GetYaxis()->SetLabelFont(42);
   __1->GetYaxis()->SetTitleSize(0.04);
   __1->GetYaxis()->SetTitleOffset(1.1);
   __1->GetYaxis()->SetTitleFont(42);
   __1->GetZaxis()->SetLabelFont(42);
   __1->GetZaxis()->SetTitleOffset(1);
   __1->GetZaxis()->SetTitleFont(42);
   __1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
