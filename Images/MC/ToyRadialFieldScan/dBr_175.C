void dBr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *dBr__7 = new TH1D("dBr__7","Number of sub-runs: 175",300,0,3);
   dBr__7->SetBinContent(62,5);
   dBr__7->SetBinContent(63,16);
   dBr__7->SetBinContent(64,38);
   dBr__7->SetBinContent(65,85);
   dBr__7->SetBinContent(66,124);
   dBr__7->SetBinContent(67,186);
   dBr__7->SetBinContent(68,168);
   dBr__7->SetBinContent(69,139);
   dBr__7->SetBinContent(70,112);
   dBr__7->SetBinContent(71,72);
   dBr__7->SetBinContent(72,35);
   dBr__7->SetBinContent(73,13);
   dBr__7->SetBinContent(74,4);
   dBr__7->SetBinContent(76,1);
   dBr__7->SetBinContent(77,1);
   dBr__7->SetBinContent(79,1);
   dBr__7->SetEntries(1000);
   dBr__7->SetLineWidth(3);
   dBr__7->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__7->GetXaxis()->CenterTitle(true);
   dBr__7->GetXaxis()->SetLabelFont(42);
   dBr__7->GetXaxis()->SetTitleSize(0.04);
   dBr__7->GetXaxis()->SetTitleOffset(1.1);
   dBr__7->GetXaxis()->SetTitleFont(42);
   dBr__7->GetYaxis()->SetTitle("Experiments");
   dBr__7->GetYaxis()->CenterTitle(true);
   dBr__7->GetYaxis()->SetNdivisions(4000510);
   dBr__7->GetYaxis()->SetLabelFont(42);
   dBr__7->GetYaxis()->SetTitleSize(0.04);
   dBr__7->GetYaxis()->SetTitleOffset(1.1);
   dBr__7->GetYaxis()->SetTitleFont(42);
   dBr__7->GetZaxis()->SetLabelFont(42);
   dBr__7->GetZaxis()->SetTitleOffset(1);
   dBr__7->GetZaxis()->SetTitleFont(42);
   dBr__7->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
