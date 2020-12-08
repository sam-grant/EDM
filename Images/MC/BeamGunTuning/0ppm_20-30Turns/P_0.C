void P_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 09:44:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_0__20 = new TH1F("P_0__20","0ppm_20-30Turns",110,0,3300);
   P_0__20->SetBinContent(98,1);
   P_0__20->SetBinContent(101,1);
   P_0__20->SetBinContent(103,43);
   P_0__20->SetBinContent(104,473);
   P_0__20->SetEntries(518);
   P_0__20->SetLineWidth(3);
   P_0__20->GetXaxis()->SetTitle("Momentum [MeV]");
   P_0__20->GetXaxis()->CenterTitle(true);
   P_0__20->GetXaxis()->SetLabelFont(42);
   P_0__20->GetXaxis()->SetTitleSize(0.04);
   P_0__20->GetXaxis()->SetTitleOffset(1.1);
   P_0__20->GetXaxis()->SetTitleFont(42);
   P_0__20->GetYaxis()->SetTitle("Ghost tracks");
   P_0__20->GetYaxis()->CenterTitle(true);
   P_0__20->GetYaxis()->SetNdivisions(4000510);
   P_0__20->GetYaxis()->SetLabelFont(42);
   P_0__20->GetYaxis()->SetTitleSize(0.04);
   P_0__20->GetYaxis()->SetTitleOffset(1.1);
   P_0__20->GetYaxis()->SetTitleFont(42);
   P_0__20->GetZaxis()->SetLabelFont(42);
   P_0__20->GetZaxis()->SetTitleOffset(1);
   P_0__20->GetZaxis()->SetTitleFont(42);
   P_0__20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
