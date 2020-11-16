void P_23()
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
   
   TH1F *P_23__50 = new TH1F("P_23__50","Plane 23",110,0,3300);
   P_23__50->SetBinContent(13,1);
   P_23__50->SetBinContent(14,428);
   P_23__50->SetEntries(429);
   P_23__50->SetLineWidth(3);
   P_23__50->GetXaxis()->SetTitle("Momentum [MeV]");
   P_23__50->GetXaxis()->CenterTitle(true);
   P_23__50->GetXaxis()->SetLabelFont(42);
   P_23__50->GetXaxis()->SetTitleSize(0.04);
   P_23__50->GetXaxis()->SetTitleOffset(1.1);
   P_23__50->GetXaxis()->SetTitleFont(42);
   P_23__50->GetYaxis()->SetTitle("Ghost tracks");
   P_23__50->GetYaxis()->CenterTitle(true);
   P_23__50->GetYaxis()->SetNdivisions(4000510);
   P_23__50->GetYaxis()->SetLabelFont(42);
   P_23__50->GetYaxis()->SetTitleSize(0.04);
   P_23__50->GetYaxis()->SetTitleOffset(1.1);
   P_23__50->GetYaxis()->SetTitleFont(42);
   P_23__50->GetZaxis()->SetLabelFont(42);
   P_23__50->GetZaxis()->SetTitleOffset(1);
   P_23__50->GetZaxis()->SetTitleFont(42);
   P_23__50->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
