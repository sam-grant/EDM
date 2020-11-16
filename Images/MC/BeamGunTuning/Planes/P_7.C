void P_7()
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
   
   TH1F *P_7__18 = new TH1F("P_7__18","Plane 7",110,0,3300);
   P_7__18->SetBinContent(60,1);
   P_7__18->SetBinContent(65,1);
   P_7__18->SetBinContent(71,1);
   P_7__18->SetBinContent(80,3);
   P_7__18->SetBinContent(81,3);
   P_7__18->SetBinContent(82,362);
   P_7__18->SetBinContent(83,107);
   P_7__18->SetBinContent(84,3);
   P_7__18->SetEntries(481);
   P_7__18->SetLineWidth(3);
   P_7__18->GetXaxis()->SetTitle("Momentum [MeV]");
   P_7__18->GetXaxis()->CenterTitle(true);
   P_7__18->GetXaxis()->SetLabelFont(42);
   P_7__18->GetXaxis()->SetTitleSize(0.04);
   P_7__18->GetXaxis()->SetTitleOffset(1.1);
   P_7__18->GetXaxis()->SetTitleFont(42);
   P_7__18->GetYaxis()->SetTitle("Ghost tracks");
   P_7__18->GetYaxis()->CenterTitle(true);
   P_7__18->GetYaxis()->SetNdivisions(4000510);
   P_7__18->GetYaxis()->SetLabelFont(42);
   P_7__18->GetYaxis()->SetTitleSize(0.04);
   P_7__18->GetYaxis()->SetTitleOffset(1.1);
   P_7__18->GetYaxis()->SetTitleFont(42);
   P_7__18->GetZaxis()->SetLabelFont(42);
   P_7__18->GetZaxis()->SetTitleOffset(1);
   P_7__18->GetZaxis()->SetTitleFont(42);
   P_7__18->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
