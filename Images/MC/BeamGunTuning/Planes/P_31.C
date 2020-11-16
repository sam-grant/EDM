void P_31()
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
   
   TH1F *P_31__66 = new TH1F("P_31__66","Plane 31",110,0,3300);
   P_31__66->SetBinContent(82,369);
   P_31__66->SetBinContent(83,59);
   P_31__66->SetEntries(428);
   P_31__66->SetLineWidth(3);
   P_31__66->GetXaxis()->SetTitle("Momentum [MeV]");
   P_31__66->GetXaxis()->CenterTitle(true);
   P_31__66->GetXaxis()->SetLabelFont(42);
   P_31__66->GetXaxis()->SetTitleSize(0.04);
   P_31__66->GetXaxis()->SetTitleOffset(1.1);
   P_31__66->GetXaxis()->SetTitleFont(42);
   P_31__66->GetYaxis()->SetTitle("Ghost tracks");
   P_31__66->GetYaxis()->CenterTitle(true);
   P_31__66->GetYaxis()->SetNdivisions(4000510);
   P_31__66->GetYaxis()->SetLabelFont(42);
   P_31__66->GetYaxis()->SetTitleSize(0.04);
   P_31__66->GetYaxis()->SetTitleOffset(1.1);
   P_31__66->GetYaxis()->SetTitleFont(42);
   P_31__66->GetZaxis()->SetLabelFont(42);
   P_31__66->GetZaxis()->SetTitleOffset(1);
   P_31__66->GetZaxis()->SetTitleFont(42);
   P_31__66->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
