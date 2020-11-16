void P_6()
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
   
   TH1F *P_6__16 = new TH1F("P_6__16","Plane 6",110,0,3300);
   P_6__16->SetBinContent(63,1);
   P_6__16->SetBinContent(64,1);
   P_6__16->SetBinContent(71,1);
   P_6__16->SetBinContent(72,2);
   P_6__16->SetBinContent(73,228);
   P_6__16->SetBinContent(74,255);
   P_6__16->SetBinContent(75,3);
   P_6__16->SetEntries(491);
   P_6__16->SetLineWidth(3);
   P_6__16->GetXaxis()->SetTitle("Momentum [MeV]");
   P_6__16->GetXaxis()->CenterTitle(true);
   P_6__16->GetXaxis()->SetLabelFont(42);
   P_6__16->GetXaxis()->SetTitleSize(0.04);
   P_6__16->GetXaxis()->SetTitleOffset(1.1);
   P_6__16->GetXaxis()->SetTitleFont(42);
   P_6__16->GetYaxis()->SetTitle("Ghost tracks");
   P_6__16->GetYaxis()->CenterTitle(true);
   P_6__16->GetYaxis()->SetNdivisions(4000510);
   P_6__16->GetYaxis()->SetLabelFont(42);
   P_6__16->GetYaxis()->SetTitleSize(0.04);
   P_6__16->GetYaxis()->SetTitleOffset(1.1);
   P_6__16->GetYaxis()->SetTitleFont(42);
   P_6__16->GetZaxis()->SetLabelFont(42);
   P_6__16->GetZaxis()->SetTitleOffset(1);
   P_6__16->GetZaxis()->SetTitleFont(42);
   P_6__16->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
