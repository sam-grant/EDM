void P_10()
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
   
   TH1F *P_10__24 = new TH1F("P_10__24","Plane 10",110,0,3300);
   P_10__24->SetBinContent(95,1);
   P_10__24->SetBinContent(98,1);
   P_10__24->SetBinContent(99,4);
   P_10__24->SetBinContent(100,441);
   P_10__24->SetBinContent(101,7);
   P_10__24->SetBinContent(102,2);
   P_10__24->SetEntries(456);
   P_10__24->SetLineWidth(3);
   P_10__24->GetXaxis()->SetTitle("Momentum [MeV]");
   P_10__24->GetXaxis()->CenterTitle(true);
   P_10__24->GetXaxis()->SetLabelFont(42);
   P_10__24->GetXaxis()->SetTitleSize(0.04);
   P_10__24->GetXaxis()->SetTitleOffset(1.1);
   P_10__24->GetXaxis()->SetTitleFont(42);
   P_10__24->GetYaxis()->SetTitle("Ghost tracks");
   P_10__24->GetYaxis()->CenterTitle(true);
   P_10__24->GetYaxis()->SetNdivisions(4000510);
   P_10__24->GetYaxis()->SetLabelFont(42);
   P_10__24->GetYaxis()->SetTitleSize(0.04);
   P_10__24->GetYaxis()->SetTitleOffset(1.1);
   P_10__24->GetYaxis()->SetTitleFont(42);
   P_10__24->GetZaxis()->SetLabelFont(42);
   P_10__24->GetZaxis()->SetTitleOffset(1);
   P_10__24->GetZaxis()->SetTitleFont(42);
   P_10__24->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
