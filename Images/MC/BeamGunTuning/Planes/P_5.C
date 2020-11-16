void P_5()
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
   
   TH1F *P_5__14 = new TH1F("P_5__14","Plane 5",110,0,3300);
   P_5__14->SetBinContent(54,1);
   P_5__14->SetBinContent(56,1);
   P_5__14->SetBinContent(61,1);
   P_5__14->SetBinContent(62,2);
   P_5__14->SetBinContent(63,375);
   P_5__14->SetBinContent(64,118);
   P_5__14->SetEntries(498);
   P_5__14->SetLineWidth(3);
   P_5__14->GetXaxis()->SetTitle("Momentum [MeV]");
   P_5__14->GetXaxis()->CenterTitle(true);
   P_5__14->GetXaxis()->SetLabelFont(42);
   P_5__14->GetXaxis()->SetTitleSize(0.04);
   P_5__14->GetXaxis()->SetTitleOffset(1.1);
   P_5__14->GetXaxis()->SetTitleFont(42);
   P_5__14->GetYaxis()->SetTitle("Ghost tracks");
   P_5__14->GetYaxis()->CenterTitle(true);
   P_5__14->GetYaxis()->SetNdivisions(4000510);
   P_5__14->GetYaxis()->SetLabelFont(42);
   P_5__14->GetYaxis()->SetTitleSize(0.04);
   P_5__14->GetYaxis()->SetTitleOffset(1.1);
   P_5__14->GetYaxis()->SetTitleFont(42);
   P_5__14->GetZaxis()->SetLabelFont(42);
   P_5__14->GetZaxis()->SetTitleOffset(1);
   P_5__14->GetZaxis()->SetTitleFont(42);
   P_5__14->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
