void P_12()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_12__28 = new TH1F("P_12__28","Plane 12",110,0,3300);
   P_12__28->SetBinContent(64,1);
   P_12__28->SetBinContent(102,3);
   P_12__28->SetBinContent(103,7);
   P_12__28->SetBinContent(104,432);
   P_12__28->SetBinContent(105,3);
   P_12__28->SetEntries(446);
   P_12__28->SetLineWidth(3);
   P_12__28->GetXaxis()->SetTitle("Momentum [MeV]");
   P_12__28->GetXaxis()->CenterTitle(true);
   P_12__28->GetXaxis()->SetLabelFont(42);
   P_12__28->GetXaxis()->SetTitleSize(0.04);
   P_12__28->GetXaxis()->SetTitleOffset(1.1);
   P_12__28->GetXaxis()->SetTitleFont(42);
   P_12__28->GetYaxis()->SetTitle("Ghost tracks");
   P_12__28->GetYaxis()->CenterTitle(true);
   P_12__28->GetYaxis()->SetNdivisions(4000510);
   P_12__28->GetYaxis()->SetLabelFont(42);
   P_12__28->GetYaxis()->SetTitleSize(0.04);
   P_12__28->GetYaxis()->SetTitleOffset(1.1);
   P_12__28->GetYaxis()->SetTitleFont(42);
   P_12__28->GetZaxis()->SetLabelFont(42);
   P_12__28->GetZaxis()->SetTitleOffset(1);
   P_12__28->GetZaxis()->SetTitleFont(42);
   P_12__28->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
