void h_muMomX_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 08:52:04 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muMomX__4 = new TH1F("h_muMomX__4","",1000,-3127.114,3127.114);
   h_muMomX__4->SetBinContent(501,10000);
   h_muMomX__4->SetEntries(10000);
   h_muMomX__4->GetXaxis()->SetTitle("Muon momentum X [MeV]");
   h_muMomX__4->GetXaxis()->CenterTitle(true);
   h_muMomX__4->GetXaxis()->SetLabelFont(42);
   h_muMomX__4->GetXaxis()->SetLabelSize(0.035);
   h_muMomX__4->GetXaxis()->SetTitleOffset(1.1);
   h_muMomX__4->GetXaxis()->SetTitleFont(42);
   h_muMomX__4->GetYaxis()->SetTitle("Entries");
   h_muMomX__4->GetYaxis()->CenterTitle(true);
   h_muMomX__4->GetYaxis()->SetNdivisions(4000510);
   h_muMomX__4->GetYaxis()->SetLabelFont(42);
   h_muMomX__4->GetYaxis()->SetLabelSize(0.035);
   h_muMomX__4->GetYaxis()->SetTitleOffset(1.1);
   h_muMomX__4->GetYaxis()->SetTitleFont(42);
   h_muMomX__4->GetZaxis()->SetLabelFont(42);
   h_muMomX__4->GetZaxis()->SetLabelSize(0.035);
   h_muMomX__4->GetZaxis()->SetTitleSize(0.035);
   h_muMomX__4->GetZaxis()->SetTitleFont(42);
   h_muMomX__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
