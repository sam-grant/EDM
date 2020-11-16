void P_11()
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
   
   TH1F *P_11__26 = new TH1F("P_11__26","Plane 11",110,0,3300);
   P_11__26->SetBinContent(64,1);
   P_11__26->SetBinContent(101,1);
   P_11__26->SetBinContent(102,6);
   P_11__26->SetBinContent(103,435);
   P_11__26->SetBinContent(104,4);
   P_11__26->SetBinContent(105,2);
   P_11__26->SetEntries(449);
   P_11__26->SetLineWidth(3);
   P_11__26->GetXaxis()->SetTitle("Momentum [MeV]");
   P_11__26->GetXaxis()->CenterTitle(true);
   P_11__26->GetXaxis()->SetLabelFont(42);
   P_11__26->GetXaxis()->SetTitleSize(0.04);
   P_11__26->GetXaxis()->SetTitleOffset(1.1);
   P_11__26->GetXaxis()->SetTitleFont(42);
   P_11__26->GetYaxis()->SetTitle("Ghost tracks");
   P_11__26->GetYaxis()->CenterTitle(true);
   P_11__26->GetYaxis()->SetNdivisions(4000510);
   P_11__26->GetYaxis()->SetLabelFont(42);
   P_11__26->GetYaxis()->SetTitleSize(0.04);
   P_11__26->GetYaxis()->SetTitleOffset(1.1);
   P_11__26->GetYaxis()->SetTitleFont(42);
   P_11__26->GetZaxis()->SetLabelFont(42);
   P_11__26->GetZaxis()->SetTitleOffset(1);
   P_11__26->GetZaxis()->SetTitleFont(42);
   P_11__26->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
