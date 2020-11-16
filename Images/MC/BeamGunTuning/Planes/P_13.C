void P_13()
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
   
   TH1F *P_13__30 = new TH1F("P_13__30","Plane 13",110,0,3300);
   P_13__30->SetBinContent(101,2);
   P_13__30->SetBinContent(102,4);
   P_13__30->SetBinContent(103,433);
   P_13__30->SetBinContent(104,2);
   P_13__30->SetEntries(441);
   P_13__30->SetLineWidth(3);
   P_13__30->GetXaxis()->SetTitle("Momentum [MeV]");
   P_13__30->GetXaxis()->CenterTitle(true);
   P_13__30->GetXaxis()->SetLabelFont(42);
   P_13__30->GetXaxis()->SetTitleSize(0.04);
   P_13__30->GetXaxis()->SetTitleOffset(1.1);
   P_13__30->GetXaxis()->SetTitleFont(42);
   P_13__30->GetYaxis()->SetTitle("Ghost tracks");
   P_13__30->GetYaxis()->CenterTitle(true);
   P_13__30->GetYaxis()->SetNdivisions(4000510);
   P_13__30->GetYaxis()->SetLabelFont(42);
   P_13__30->GetYaxis()->SetTitleSize(0.04);
   P_13__30->GetYaxis()->SetTitleOffset(1.1);
   P_13__30->GetYaxis()->SetTitleFont(42);
   P_13__30->GetZaxis()->SetLabelFont(42);
   P_13__30->GetZaxis()->SetTitleOffset(1);
   P_13__30->GetZaxis()->SetTitleFont(42);
   P_13__30->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
