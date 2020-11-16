void P_15()
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
   
   TH1F *P_15__34 = new TH1F("P_15__34","Plane 15",110,0,3300);
   P_15__34->SetBinContent(82,1);
   P_15__34->SetBinContent(94,1);
   P_15__34->SetBinContent(95,2);
   P_15__34->SetBinContent(96,432);
   P_15__34->SetBinContent(97,1);
   P_15__34->SetEntries(437);
   P_15__34->SetLineWidth(3);
   P_15__34->GetXaxis()->SetTitle("Momentum [MeV]");
   P_15__34->GetXaxis()->CenterTitle(true);
   P_15__34->GetXaxis()->SetLabelFont(42);
   P_15__34->GetXaxis()->SetTitleSize(0.04);
   P_15__34->GetXaxis()->SetTitleOffset(1.1);
   P_15__34->GetXaxis()->SetTitleFont(42);
   P_15__34->GetYaxis()->SetTitle("Ghost tracks");
   P_15__34->GetYaxis()->CenterTitle(true);
   P_15__34->GetYaxis()->SetNdivisions(4000510);
   P_15__34->GetYaxis()->SetLabelFont(42);
   P_15__34->GetYaxis()->SetTitleSize(0.04);
   P_15__34->GetYaxis()->SetTitleOffset(1.1);
   P_15__34->GetYaxis()->SetTitleFont(42);
   P_15__34->GetZaxis()->SetLabelFont(42);
   P_15__34->GetZaxis()->SetTitleOffset(1);
   P_15__34->GetZaxis()->SetTitleFont(42);
   P_15__34->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
