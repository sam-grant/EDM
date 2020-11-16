void P_45()
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
   
   TH1F *P_45__94 = new TH1F("P_45__94","Plane 45",110,0,3300);
   P_45__94->SetBinContent(40,424);
   P_45__94->SetEntries(424);
   P_45__94->SetLineWidth(3);
   P_45__94->GetXaxis()->SetTitle("Momentum [MeV]");
   P_45__94->GetXaxis()->CenterTitle(true);
   P_45__94->GetXaxis()->SetLabelFont(42);
   P_45__94->GetXaxis()->SetTitleSize(0.04);
   P_45__94->GetXaxis()->SetTitleOffset(1.1);
   P_45__94->GetXaxis()->SetTitleFont(42);
   P_45__94->GetYaxis()->SetTitle("Ghost tracks");
   P_45__94->GetYaxis()->CenterTitle(true);
   P_45__94->GetYaxis()->SetNdivisions(4000510);
   P_45__94->GetYaxis()->SetLabelFont(42);
   P_45__94->GetYaxis()->SetTitleSize(0.04);
   P_45__94->GetYaxis()->SetTitleOffset(1.1);
   P_45__94->GetYaxis()->SetTitleFont(42);
   P_45__94->GetZaxis()->SetLabelFont(42);
   P_45__94->GetZaxis()->SetTitleOffset(1);
   P_45__94->GetZaxis()->SetTitleFont(42);
   P_45__94->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
