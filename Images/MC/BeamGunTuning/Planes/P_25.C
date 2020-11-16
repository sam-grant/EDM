void P_25()
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
   
   TH1F *P_25__54 = new TH1F("P_25__54","Plane 25",110,0,3300);
   P_25__54->SetBinContent(14,428);
   P_25__54->SetBinContent(15,1);
   P_25__54->SetEntries(429);
   P_25__54->SetLineWidth(3);
   P_25__54->GetXaxis()->SetTitle("Momentum [MeV]");
   P_25__54->GetXaxis()->CenterTitle(true);
   P_25__54->GetXaxis()->SetLabelFont(42);
   P_25__54->GetXaxis()->SetTitleSize(0.04);
   P_25__54->GetXaxis()->SetTitleOffset(1.1);
   P_25__54->GetXaxis()->SetTitleFont(42);
   P_25__54->GetYaxis()->SetTitle("Ghost tracks");
   P_25__54->GetYaxis()->CenterTitle(true);
   P_25__54->GetYaxis()->SetNdivisions(4000510);
   P_25__54->GetYaxis()->SetLabelFont(42);
   P_25__54->GetYaxis()->SetTitleSize(0.04);
   P_25__54->GetYaxis()->SetTitleOffset(1.1);
   P_25__54->GetYaxis()->SetTitleFont(42);
   P_25__54->GetZaxis()->SetLabelFont(42);
   P_25__54->GetZaxis()->SetTitleOffset(1);
   P_25__54->GetZaxis()->SetTitleFont(42);
   P_25__54->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
