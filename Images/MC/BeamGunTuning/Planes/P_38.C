void P_38()
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
   
   TH1F *P_38__80 = new TH1F("P_38__80","Plane 38",110,0,3300);
   P_38__80->SetBinContent(100,425);
   P_38__80->SetBinContent(101,1);
   P_38__80->SetEntries(426);
   P_38__80->SetLineWidth(3);
   P_38__80->GetXaxis()->SetTitle("Momentum [MeV]");
   P_38__80->GetXaxis()->CenterTitle(true);
   P_38__80->GetXaxis()->SetLabelFont(42);
   P_38__80->GetXaxis()->SetTitleSize(0.04);
   P_38__80->GetXaxis()->SetTitleOffset(1.1);
   P_38__80->GetXaxis()->SetTitleFont(42);
   P_38__80->GetYaxis()->SetTitle("Ghost tracks");
   P_38__80->GetYaxis()->CenterTitle(true);
   P_38__80->GetYaxis()->SetNdivisions(4000510);
   P_38__80->GetYaxis()->SetLabelFont(42);
   P_38__80->GetYaxis()->SetTitleSize(0.04);
   P_38__80->GetYaxis()->SetTitleOffset(1.1);
   P_38__80->GetYaxis()->SetTitleFont(42);
   P_38__80->GetZaxis()->SetLabelFont(42);
   P_38__80->GetZaxis()->SetTitleOffset(1);
   P_38__80->GetZaxis()->SetTitleFont(42);
   P_38__80->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
