void P_8()
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
   
   TH1F *P_8__20 = new TH1F("P_8__20","Plane 8",110,0,3300);
   P_8__20->SetBinContent(65,1);
   P_8__20->SetBinContent(66,1);
   P_8__20->SetBinContent(69,1);
   P_8__20->SetBinContent(78,1);
   P_8__20->SetBinContent(86,2);
   P_8__20->SetBinContent(87,1);
   P_8__20->SetBinContent(88,2);
   P_8__20->SetBinContent(89,5);
   P_8__20->SetBinContent(90,454);
   P_8__20->SetBinContent(91,7);
   P_8__20->SetEntries(475);
   P_8__20->SetLineWidth(3);
   P_8__20->GetXaxis()->SetTitle("Momentum [MeV]");
   P_8__20->GetXaxis()->CenterTitle(true);
   P_8__20->GetXaxis()->SetLabelFont(42);
   P_8__20->GetXaxis()->SetTitleSize(0.04);
   P_8__20->GetXaxis()->SetTitleOffset(1.1);
   P_8__20->GetXaxis()->SetTitleFont(42);
   P_8__20->GetYaxis()->SetTitle("Ghost tracks");
   P_8__20->GetYaxis()->CenterTitle(true);
   P_8__20->GetYaxis()->SetNdivisions(4000510);
   P_8__20->GetYaxis()->SetLabelFont(42);
   P_8__20->GetYaxis()->SetTitleSize(0.04);
   P_8__20->GetYaxis()->SetTitleOffset(1.1);
   P_8__20->GetYaxis()->SetTitleFont(42);
   P_8__20->GetZaxis()->SetLabelFont(42);
   P_8__20->GetZaxis()->SetTitleOffset(1);
   P_8__20->GetZaxis()->SetTitleFont(42);
   P_8__20->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
