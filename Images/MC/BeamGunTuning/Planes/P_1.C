void P_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_1__6 = new TH1F("P_1__6","Plane 1",110,0,3300);
   P_1__6->SetBinContent(13,1);
   P_1__6->SetBinContent(14,469);
   P_1__6->SetBinContent(15,37);
   P_1__6->SetBinContent(16,6);
   P_1__6->SetBinContent(18,1);
   P_1__6->SetBinContent(19,1);
   P_1__6->SetEntries(515);
   P_1__6->SetLineWidth(3);
   P_1__6->GetXaxis()->SetTitle("Momentum [MeV]");
   P_1__6->GetXaxis()->CenterTitle(true);
   P_1__6->GetXaxis()->SetLabelFont(42);
   P_1__6->GetXaxis()->SetTitleSize(0.04);
   P_1__6->GetXaxis()->SetTitleOffset(1.1);
   P_1__6->GetXaxis()->SetTitleFont(42);
   P_1__6->GetYaxis()->SetTitle("Ghost tracks");
   P_1__6->GetYaxis()->CenterTitle(true);
   P_1__6->GetYaxis()->SetNdivisions(4000510);
   P_1__6->GetYaxis()->SetLabelFont(42);
   P_1__6->GetYaxis()->SetTitleSize(0.04);
   P_1__6->GetYaxis()->SetTitleOffset(1.1);
   P_1__6->GetYaxis()->SetTitleFont(42);
   P_1__6->GetZaxis()->SetLabelFont(42);
   P_1__6->GetZaxis()->SetTitleOffset(1);
   P_1__6->GetZaxis()->SetTitleFont(42);
   P_1__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
