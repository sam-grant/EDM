void P_35()
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
   
   TH1F *P_35__74 = new TH1F("P_35__74","Plane 35",110,0,3300);
   P_35__74->SetBinContent(100,1);
   P_35__74->SetBinContent(102,1);
   P_35__74->SetBinContent(103,425);
   P_35__74->SetEntries(427);
   P_35__74->SetLineWidth(3);
   P_35__74->GetXaxis()->SetTitle("Momentum [MeV]");
   P_35__74->GetXaxis()->CenterTitle(true);
   P_35__74->GetXaxis()->SetLabelFont(42);
   P_35__74->GetXaxis()->SetTitleSize(0.04);
   P_35__74->GetXaxis()->SetTitleOffset(1.1);
   P_35__74->GetXaxis()->SetTitleFont(42);
   P_35__74->GetYaxis()->SetTitle("Ghost tracks");
   P_35__74->GetYaxis()->CenterTitle(true);
   P_35__74->GetYaxis()->SetNdivisions(4000510);
   P_35__74->GetYaxis()->SetLabelFont(42);
   P_35__74->GetYaxis()->SetTitleSize(0.04);
   P_35__74->GetYaxis()->SetTitleOffset(1.1);
   P_35__74->GetYaxis()->SetTitleFont(42);
   P_35__74->GetZaxis()->SetLabelFont(42);
   P_35__74->GetZaxis()->SetTitleOffset(1);
   P_35__74->GetZaxis()->SetTitleFont(42);
   P_35__74->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
