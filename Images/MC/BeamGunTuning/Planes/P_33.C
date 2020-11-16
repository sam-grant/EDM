void P_33()
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
   
   TH1F *P_33__70 = new TH1F("P_33__70","Plane 33",110,0,3300);
   P_33__70->SetBinContent(94,1);
   P_33__70->SetBinContent(95,2);
   P_33__70->SetBinContent(96,425);
   P_33__70->SetEntries(428);
   P_33__70->SetLineWidth(3);
   P_33__70->GetXaxis()->SetTitle("Momentum [MeV]");
   P_33__70->GetXaxis()->CenterTitle(true);
   P_33__70->GetXaxis()->SetLabelFont(42);
   P_33__70->GetXaxis()->SetTitleSize(0.04);
   P_33__70->GetXaxis()->SetTitleOffset(1.1);
   P_33__70->GetXaxis()->SetTitleFont(42);
   P_33__70->GetYaxis()->SetTitle("Ghost tracks");
   P_33__70->GetYaxis()->CenterTitle(true);
   P_33__70->GetYaxis()->SetNdivisions(4000510);
   P_33__70->GetYaxis()->SetLabelFont(42);
   P_33__70->GetYaxis()->SetTitleSize(0.04);
   P_33__70->GetYaxis()->SetTitleOffset(1.1);
   P_33__70->GetYaxis()->SetTitleFont(42);
   P_33__70->GetZaxis()->SetLabelFont(42);
   P_33__70->GetZaxis()->SetTitleOffset(1);
   P_33__70->GetZaxis()->SetTitleFont(42);
   P_33__70->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
