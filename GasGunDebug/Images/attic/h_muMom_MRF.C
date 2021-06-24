void h_muMom_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 08:52:04 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muMom__2 = new TH1F("h_muMom__2","",500,0,3127.114);
   h_muMom__2->SetBinContent(495,10000);
   h_muMom__2->SetEntries(10000);
   h_muMom__2->GetXaxis()->SetTitle("Muon momentum [MeV]");
   h_muMom__2->GetXaxis()->CenterTitle(true);
   h_muMom__2->GetXaxis()->SetLabelFont(42);
   h_muMom__2->GetXaxis()->SetLabelSize(0.035);
   h_muMom__2->GetXaxis()->SetTitleOffset(1.1);
   h_muMom__2->GetXaxis()->SetTitleFont(42);
   h_muMom__2->GetYaxis()->SetTitle("Entries");
   h_muMom__2->GetYaxis()->CenterTitle(true);
   h_muMom__2->GetYaxis()->SetNdivisions(4000510);
   h_muMom__2->GetYaxis()->SetLabelFont(42);
   h_muMom__2->GetYaxis()->SetLabelSize(0.035);
   h_muMom__2->GetYaxis()->SetTitleOffset(1.1);
   h_muMom__2->GetYaxis()->SetTitleFont(42);
   h_muMom__2->GetZaxis()->SetLabelFont(42);
   h_muMom__2->GetZaxis()->SetLabelSize(0.035);
   h_muMom__2->GetZaxis()->SetTitleSize(0.035);
   h_muMom__2->GetZaxis()->SetTitleFont(42);
   h_muMom__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
