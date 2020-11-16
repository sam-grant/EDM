void P_42()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_42__88 = new TH1F("P_42__88","Plane 42",110,0,3300);
   P_42__88->SetBinContent(70,1);
   P_42__88->SetBinContent(73,224);
   P_42__88->SetBinContent(74,200);
   P_42__88->SetEntries(425);
   P_42__88->SetLineWidth(3);
   P_42__88->GetXaxis()->SetTitle("Momentum [MeV]");
   P_42__88->GetXaxis()->CenterTitle(true);
   P_42__88->GetXaxis()->SetLabelFont(42);
   P_42__88->GetXaxis()->SetTitleSize(0.04);
   P_42__88->GetXaxis()->SetTitleOffset(1.1);
   P_42__88->GetXaxis()->SetTitleFont(42);
   P_42__88->GetYaxis()->SetTitle("Ghost tracks");
   P_42__88->GetYaxis()->CenterTitle(true);
   P_42__88->GetYaxis()->SetNdivisions(4000510);
   P_42__88->GetYaxis()->SetLabelFont(42);
   P_42__88->GetYaxis()->SetTitleSize(0.04);
   P_42__88->GetYaxis()->SetTitleOffset(1.1);
   P_42__88->GetYaxis()->SetTitleFont(42);
   P_42__88->GetZaxis()->SetLabelFont(42);
   P_42__88->GetZaxis()->SetTitleOffset(1);
   P_42__88->GetZaxis()->SetTitleFont(42);
   P_42__88->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
