void P_2()
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
   
   TH1F *P_2__8 = new TH1F("P_2__8","Plane 2",110,0,3300);
   P_2__8->SetBinContent(26,1);
   P_2__8->SetBinContent(27,452);
   P_2__8->SetBinContent(28,51);
   P_2__8->SetBinContent(29,9);
   P_2__8->SetEntries(513);
   P_2__8->SetLineWidth(3);
   P_2__8->GetXaxis()->SetTitle("Momentum [MeV]");
   P_2__8->GetXaxis()->CenterTitle(true);
   P_2__8->GetXaxis()->SetLabelFont(42);
   P_2__8->GetXaxis()->SetTitleSize(0.04);
   P_2__8->GetXaxis()->SetTitleOffset(1.1);
   P_2__8->GetXaxis()->SetTitleFont(42);
   P_2__8->GetYaxis()->SetTitle("Ghost tracks");
   P_2__8->GetYaxis()->CenterTitle(true);
   P_2__8->GetYaxis()->SetNdivisions(4000510);
   P_2__8->GetYaxis()->SetLabelFont(42);
   P_2__8->GetYaxis()->SetTitleSize(0.04);
   P_2__8->GetYaxis()->SetTitleOffset(1.1);
   P_2__8->GetYaxis()->SetTitleFont(42);
   P_2__8->GetZaxis()->SetLabelFont(42);
   P_2__8->GetZaxis()->SetTitleOffset(1);
   P_2__8->GetZaxis()->SetTitleFont(42);
   P_2__8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
