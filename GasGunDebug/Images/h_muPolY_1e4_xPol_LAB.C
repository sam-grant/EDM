void h_muPolY_1e4_xPol_LAB()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:56:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muPolY__4 = new TH1F("h_muPolY__4","",500,-1,1);
   h_muPolY__4->SetBinContent(501,10000);
   h_muPolY__4->SetEntries(10000);
   h_muPolY__4->GetXaxis()->SetTitle("Muon polarisation Y [rad]");
   h_muPolY__4->GetXaxis()->CenterTitle(true);
   h_muPolY__4->GetXaxis()->SetLabelFont(42);
   h_muPolY__4->GetXaxis()->SetTitleSize(0.04);
   h_muPolY__4->GetXaxis()->SetTitleOffset(1.1);
   h_muPolY__4->GetXaxis()->SetTitleFont(42);
   h_muPolY__4->GetYaxis()->SetTitle("Entries");
   h_muPolY__4->GetYaxis()->CenterTitle(true);
   h_muPolY__4->GetYaxis()->SetNdivisions(4000510);
   h_muPolY__4->GetYaxis()->SetLabelFont(42);
   h_muPolY__4->GetYaxis()->SetTitleSize(0.04);
   h_muPolY__4->GetYaxis()->SetTitleOffset(1.1);
   h_muPolY__4->GetYaxis()->SetTitleFont(42);
   h_muPolY__4->GetZaxis()->SetLabelFont(42);
   h_muPolY__4->GetZaxis()->SetTitleOffset(1);
   h_muPolY__4->GetZaxis()->SetTitleFont(42);
   h_muPolY__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
