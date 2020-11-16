void P_46()
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
   
   TH1F *P_46__96 = new TH1F("P_46__96","Plane 46",110,0,3300);
   P_46__96->SetBinContent(27,424);
   P_46__96->SetEntries(424);
   P_46__96->SetLineWidth(3);
   P_46__96->GetXaxis()->SetTitle("Momentum [MeV]");
   P_46__96->GetXaxis()->CenterTitle(true);
   P_46__96->GetXaxis()->SetLabelFont(42);
   P_46__96->GetXaxis()->SetTitleSize(0.04);
   P_46__96->GetXaxis()->SetTitleOffset(1.1);
   P_46__96->GetXaxis()->SetTitleFont(42);
   P_46__96->GetYaxis()->SetTitle("Ghost tracks");
   P_46__96->GetYaxis()->CenterTitle(true);
   P_46__96->GetYaxis()->SetNdivisions(4000510);
   P_46__96->GetYaxis()->SetLabelFont(42);
   P_46__96->GetYaxis()->SetTitleSize(0.04);
   P_46__96->GetYaxis()->SetTitleOffset(1.1);
   P_46__96->GetYaxis()->SetTitleFont(42);
   P_46__96->GetZaxis()->SetLabelFont(42);
   P_46__96->GetZaxis()->SetTitleOffset(1);
   P_46__96->GetZaxis()->SetTitleFont(42);
   P_46__96->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
