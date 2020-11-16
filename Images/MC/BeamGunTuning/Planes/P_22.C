void P_22()
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
   
   TH1F *P_22__48 = new TH1F("P_22__48","Plane 22",110,0,3300);
   P_22__48->SetBinContent(26,2);
   P_22__48->SetBinContent(27,429);
   P_22__48->SetEntries(431);
   P_22__48->SetLineWidth(3);
   P_22__48->GetXaxis()->SetTitle("Momentum [MeV]");
   P_22__48->GetXaxis()->CenterTitle(true);
   P_22__48->GetXaxis()->SetLabelFont(42);
   P_22__48->GetXaxis()->SetTitleSize(0.04);
   P_22__48->GetXaxis()->SetTitleOffset(1.1);
   P_22__48->GetXaxis()->SetTitleFont(42);
   P_22__48->GetYaxis()->SetTitle("Ghost tracks");
   P_22__48->GetYaxis()->CenterTitle(true);
   P_22__48->GetYaxis()->SetNdivisions(4000510);
   P_22__48->GetYaxis()->SetLabelFont(42);
   P_22__48->GetYaxis()->SetTitleSize(0.04);
   P_22__48->GetYaxis()->SetTitleOffset(1.1);
   P_22__48->GetYaxis()->SetTitleFont(42);
   P_22__48->GetZaxis()->SetLabelFont(42);
   P_22__48->GetZaxis()->SetTitleOffset(1);
   P_22__48->GetZaxis()->SetTitleFont(42);
   P_22__48->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
