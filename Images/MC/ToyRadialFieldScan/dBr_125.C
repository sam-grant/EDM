void dBr_125()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *dBr__5 = new TH1D("dBr__5","Number of sub-runs: 125",300,0,3);
   dBr__5->SetBinContent(71,1);
   dBr__5->SetBinContent(72,3);
   dBr__5->SetBinContent(73,8);
   dBr__5->SetBinContent(74,16);
   dBr__5->SetBinContent(75,29);
   dBr__5->SetBinContent(76,47);
   dBr__5->SetBinContent(77,76);
   dBr__5->SetBinContent(78,94);
   dBr__5->SetBinContent(79,125);
   dBr__5->SetBinContent(80,115);
   dBr__5->SetBinContent(81,128);
   dBr__5->SetBinContent(82,106);
   dBr__5->SetBinContent(83,98);
   dBr__5->SetBinContent(84,63);
   dBr__5->SetBinContent(85,44);
   dBr__5->SetBinContent(86,17);
   dBr__5->SetBinContent(87,9);
   dBr__5->SetBinContent(88,11);
   dBr__5->SetBinContent(89,6);
   dBr__5->SetBinContent(90,2);
   dBr__5->SetBinContent(91,1);
   dBr__5->SetBinContent(94,1);
   dBr__5->SetEntries(1000);
   dBr__5->SetLineWidth(3);
   dBr__5->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__5->GetXaxis()->CenterTitle(true);
   dBr__5->GetXaxis()->SetLabelFont(42);
   dBr__5->GetXaxis()->SetTitleSize(0.04);
   dBr__5->GetXaxis()->SetTitleOffset(1.1);
   dBr__5->GetXaxis()->SetTitleFont(42);
   dBr__5->GetYaxis()->SetTitle("Experiments");
   dBr__5->GetYaxis()->CenterTitle(true);
   dBr__5->GetYaxis()->SetNdivisions(4000510);
   dBr__5->GetYaxis()->SetLabelFont(42);
   dBr__5->GetYaxis()->SetTitleSize(0.04);
   dBr__5->GetYaxis()->SetTitleOffset(1.1);
   dBr__5->GetYaxis()->SetTitleFont(42);
   dBr__5->GetZaxis()->SetLabelFont(42);
   dBr__5->GetZaxis()->SetTitleOffset(1);
   dBr__5->GetZaxis()->SetTitleFont(42);
   dBr__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
