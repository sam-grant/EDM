void dBr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *dBr__8 = new TH1D("dBr__8","Number of sub-runs: 200",300,0,3);
   dBr__8->SetBinContent(58,4);
   dBr__8->SetBinContent(59,21);
   dBr__8->SetBinContent(60,39);
   dBr__8->SetBinContent(61,99);
   dBr__8->SetBinContent(62,180);
   dBr__8->SetBinContent(63,205);
   dBr__8->SetBinContent(64,151);
   dBr__8->SetBinContent(65,157);
   dBr__8->SetBinContent(66,90);
   dBr__8->SetBinContent(67,33);
   dBr__8->SetBinContent(68,16);
   dBr__8->SetBinContent(69,3);
   dBr__8->SetBinContent(70,2);
   dBr__8->SetEntries(1000);
   dBr__8->SetLineWidth(3);
   dBr__8->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__8->GetXaxis()->CenterTitle(true);
   dBr__8->GetXaxis()->SetLabelFont(42);
   dBr__8->GetXaxis()->SetTitleSize(0.04);
   dBr__8->GetXaxis()->SetTitleOffset(1.1);
   dBr__8->GetXaxis()->SetTitleFont(42);
   dBr__8->GetYaxis()->SetTitle("Experiments");
   dBr__8->GetYaxis()->CenterTitle(true);
   dBr__8->GetYaxis()->SetNdivisions(4000510);
   dBr__8->GetYaxis()->SetLabelFont(42);
   dBr__8->GetYaxis()->SetTitleSize(0.04);
   dBr__8->GetYaxis()->SetTitleOffset(1.1);
   dBr__8->GetYaxis()->SetTitleFont(42);
   dBr__8->GetZaxis()->SetLabelFont(42);
   dBr__8->GetZaxis()->SetTitleOffset(1);
   dBr__8->GetZaxis()->SetTitleFont(42);
   dBr__8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
