void P_30()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_30__64 = new TH1F("P_30__64","Plane 30",110,0,3300);
   P_30__64->SetBinContent(73,237);
   P_30__64->SetBinContent(74,191);
   P_30__64->SetEntries(428);
   P_30__64->SetLineWidth(3);
   P_30__64->GetXaxis()->SetTitle("Momentum [MeV]");
   P_30__64->GetXaxis()->CenterTitle(true);
   P_30__64->GetXaxis()->SetLabelFont(42);
   P_30__64->GetXaxis()->SetTitleSize(0.04);
   P_30__64->GetXaxis()->SetTitleOffset(1.1);
   P_30__64->GetXaxis()->SetTitleFont(42);
   P_30__64->GetYaxis()->SetTitle("Ghost tracks");
   P_30__64->GetYaxis()->CenterTitle(true);
   P_30__64->GetYaxis()->SetNdivisions(4000510);
   P_30__64->GetYaxis()->SetLabelFont(42);
   P_30__64->GetYaxis()->SetTitleSize(0.04);
   P_30__64->GetYaxis()->SetTitleOffset(1.1);
   P_30__64->GetYaxis()->SetTitleFont(42);
   P_30__64->GetZaxis()->SetLabelFont(42);
   P_30__64->GetZaxis()->SetTitleOffset(1);
   P_30__64->GetZaxis()->SetTitleFont(42);
   P_30__64->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
