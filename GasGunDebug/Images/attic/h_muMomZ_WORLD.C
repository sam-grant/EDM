void h_muMomZ_WORLD()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 08:52:19 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muMomZ__8 = new TH1F("h_muMomZ__8","",1000,-3127.114,3127.114);
   h_muMomZ__8->SetBinContent(995,10000);
   h_muMomZ__8->SetEntries(10000);
   h_muMomZ__8->GetXaxis()->SetTitle("Muon momentum Z [MeV]");
   h_muMomZ__8->GetXaxis()->CenterTitle(true);
   h_muMomZ__8->GetXaxis()->SetLabelFont(42);
   h_muMomZ__8->GetXaxis()->SetLabelSize(0.035);
   h_muMomZ__8->GetXaxis()->SetTitleOffset(1.1);
   h_muMomZ__8->GetXaxis()->SetTitleFont(42);
   h_muMomZ__8->GetYaxis()->SetTitle("Entries");
   h_muMomZ__8->GetYaxis()->CenterTitle(true);
   h_muMomZ__8->GetYaxis()->SetNdivisions(4000510);
   h_muMomZ__8->GetYaxis()->SetLabelFont(42);
   h_muMomZ__8->GetYaxis()->SetLabelSize(0.035);
   h_muMomZ__8->GetYaxis()->SetTitleOffset(1.1);
   h_muMomZ__8->GetYaxis()->SetTitleFont(42);
   h_muMomZ__8->GetZaxis()->SetLabelFont(42);
   h_muMomZ__8->GetZaxis()->SetLabelSize(0.035);
   h_muMomZ__8->GetZaxis()->SetTitleSize(0.035);
   h_muMomZ__8->GetZaxis()->SetTitleFont(42);
   h_muMomZ__8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
