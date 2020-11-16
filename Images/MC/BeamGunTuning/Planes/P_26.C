void P_26()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_26__56 = new TH1F("P_26__56","Plane 26",110,0,3300);
   P_26__56->SetBinContent(27,427);
   P_26__56->SetBinContent(28,2);
   P_26__56->SetEntries(429);
   P_26__56->SetLineWidth(3);
   P_26__56->GetXaxis()->SetTitle("Momentum [MeV]");
   P_26__56->GetXaxis()->CenterTitle(true);
   P_26__56->GetXaxis()->SetLabelFont(42);
   P_26__56->GetXaxis()->SetTitleSize(0.04);
   P_26__56->GetXaxis()->SetTitleOffset(1.1);
   P_26__56->GetXaxis()->SetTitleFont(42);
   P_26__56->GetYaxis()->SetTitle("Ghost tracks");
   P_26__56->GetYaxis()->CenterTitle(true);
   P_26__56->GetYaxis()->SetNdivisions(4000510);
   P_26__56->GetYaxis()->SetLabelFont(42);
   P_26__56->GetYaxis()->SetTitleSize(0.04);
   P_26__56->GetYaxis()->SetTitleOffset(1.1);
   P_26__56->GetYaxis()->SetTitleFont(42);
   P_26__56->GetZaxis()->SetLabelFont(42);
   P_26__56->GetZaxis()->SetTitleOffset(1);
   P_26__56->GetZaxis()->SetTitleFont(42);
   P_26__56->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
