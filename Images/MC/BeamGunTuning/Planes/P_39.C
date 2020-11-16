void P_39()
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
   
   TH1F *P_39__82 = new TH1F("P_39__82","Plane 39",110,0,3300);
   P_39__82->SetBinContent(95,1);
   P_39__82->SetBinContent(96,424);
   P_39__82->SetEntries(425);
   P_39__82->SetLineWidth(3);
   P_39__82->GetXaxis()->SetTitle("Momentum [MeV]");
   P_39__82->GetXaxis()->CenterTitle(true);
   P_39__82->GetXaxis()->SetLabelFont(42);
   P_39__82->GetXaxis()->SetTitleSize(0.04);
   P_39__82->GetXaxis()->SetTitleOffset(1.1);
   P_39__82->GetXaxis()->SetTitleFont(42);
   P_39__82->GetYaxis()->SetTitle("Ghost tracks");
   P_39__82->GetYaxis()->CenterTitle(true);
   P_39__82->GetYaxis()->SetNdivisions(4000510);
   P_39__82->GetYaxis()->SetLabelFont(42);
   P_39__82->GetYaxis()->SetTitleSize(0.04);
   P_39__82->GetYaxis()->SetTitleOffset(1.1);
   P_39__82->GetYaxis()->SetTitleFont(42);
   P_39__82->GetZaxis()->SetLabelFont(42);
   P_39__82->GetZaxis()->SetTitleOffset(1);
   P_39__82->GetZaxis()->SetTitleFont(42);
   P_39__82->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
