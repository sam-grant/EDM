void h_muMomY_WORLD()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 08:52:19 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muMomY__6 = new TH1F("h_muMomY__6","",1000,-3127.114,3127.114);
   h_muMomY__6->SetBinContent(501,10000);
   h_muMomY__6->SetEntries(10000);
   h_muMomY__6->GetXaxis()->SetTitle("Muon momentum Y [MeV]");
   h_muMomY__6->GetXaxis()->CenterTitle(true);
   h_muMomY__6->GetXaxis()->SetLabelFont(42);
   h_muMomY__6->GetXaxis()->SetLabelSize(0.035);
   h_muMomY__6->GetXaxis()->SetTitleOffset(1.1);
   h_muMomY__6->GetXaxis()->SetTitleFont(42);
   h_muMomY__6->GetYaxis()->SetTitle("Entries");
   h_muMomY__6->GetYaxis()->CenterTitle(true);
   h_muMomY__6->GetYaxis()->SetNdivisions(4000510);
   h_muMomY__6->GetYaxis()->SetLabelFont(42);
   h_muMomY__6->GetYaxis()->SetLabelSize(0.035);
   h_muMomY__6->GetYaxis()->SetTitleOffset(1.1);
   h_muMomY__6->GetYaxis()->SetTitleFont(42);
   h_muMomY__6->GetZaxis()->SetLabelFont(42);
   h_muMomY__6->GetZaxis()->SetLabelSize(0.035);
   h_muMomY__6->GetZaxis()->SetTitleSize(0.035);
   h_muMomY__6->GetZaxis()->SetTitleFont(42);
   h_muMomY__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
