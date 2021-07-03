void h_muPolZ_1e4_xPol_LAB()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:56:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_muPolZ__6 = new TH1F("h_muPolZ__6","",500,0,2);
   h_muPolZ__6->SetBinContent(1,10000);
   h_muPolZ__6->SetEntries(10000);
   h_muPolZ__6->GetXaxis()->SetTitle("Muon polarisation Z [rad]");
   h_muPolZ__6->GetXaxis()->CenterTitle(true);
   h_muPolZ__6->GetXaxis()->SetLabelFont(42);
   h_muPolZ__6->GetXaxis()->SetTitleSize(0.04);
   h_muPolZ__6->GetXaxis()->SetTitleOffset(1.1);
   h_muPolZ__6->GetXaxis()->SetTitleFont(42);
   h_muPolZ__6->GetYaxis()->SetTitle("Entries");
   h_muPolZ__6->GetYaxis()->CenterTitle(true);
   h_muPolZ__6->GetYaxis()->SetNdivisions(4000510);
   h_muPolZ__6->GetYaxis()->SetLabelFont(42);
   h_muPolZ__6->GetYaxis()->SetTitleSize(0.04);
   h_muPolZ__6->GetYaxis()->SetTitleOffset(1.1);
   h_muPolZ__6->GetYaxis()->SetTitleFont(42);
   h_muPolZ__6->GetZaxis()->SetLabelFont(42);
   h_muPolZ__6->GetZaxis()->SetTitleOffset(1);
   h_muPolZ__6->GetZaxis()->SetTitleFont(42);
   h_muPolZ__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
