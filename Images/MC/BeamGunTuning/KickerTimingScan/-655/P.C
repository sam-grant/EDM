void P()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P__14 = new TH1F("P__14","-655",110,0,3300);
   P__14->SetLineWidth(3);
   P__14->GetXaxis()->SetTitle("Momentum [MeV]");
   P__14->GetXaxis()->CenterTitle(true);
   P__14->GetXaxis()->SetLabelFont(42);
   P__14->GetXaxis()->SetTitleSize(0.04);
   P__14->GetXaxis()->SetTitleOffset(1.1);
   P__14->GetXaxis()->SetTitleFont(42);
   P__14->GetYaxis()->SetTitle("Ghost tracks");
   P__14->GetYaxis()->CenterTitle(true);
   P__14->GetYaxis()->SetNdivisions(4000510);
   P__14->GetYaxis()->SetLabelFont(42);
   P__14->GetYaxis()->SetTitleSize(0.04);
   P__14->GetYaxis()->SetTitleOffset(1.1);
   P__14->GetYaxis()->SetTitleFont(42);
   P__14->GetZaxis()->SetLabelFont(42);
   P__14->GetZaxis()->SetTitleOffset(1);
   P__14->GetZaxis()->SetTitleFont(42);
   P__14->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
