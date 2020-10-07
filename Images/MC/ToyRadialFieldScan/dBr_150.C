void dBr_150()
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
   
   TH1D *dBr__6 = new TH1D("dBr__6","Number of sub-runs: 150",300,0,3);
   dBr__6->SetBinContent(65,1);
   dBr__6->SetBinContent(66,3);
   dBr__6->SetBinContent(67,3);
   dBr__6->SetBinContent(68,26);
   dBr__6->SetBinContent(69,40);
   dBr__6->SetBinContent(70,65);
   dBr__6->SetBinContent(71,114);
   dBr__6->SetBinContent(72,135);
   dBr__6->SetBinContent(73,139);
   dBr__6->SetBinContent(74,139);
   dBr__6->SetBinContent(75,120);
   dBr__6->SetBinContent(76,85);
   dBr__6->SetBinContent(77,62);
   dBr__6->SetBinContent(78,34);
   dBr__6->SetBinContent(79,22);
   dBr__6->SetBinContent(80,6);
   dBr__6->SetBinContent(81,4);
   dBr__6->SetBinContent(82,2);
   dBr__6->SetEntries(1000);
   dBr__6->SetLineWidth(3);
   dBr__6->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__6->GetXaxis()->CenterTitle(true);
   dBr__6->GetXaxis()->SetLabelFont(42);
   dBr__6->GetXaxis()->SetTitleSize(0.04);
   dBr__6->GetXaxis()->SetTitleOffset(1.1);
   dBr__6->GetXaxis()->SetTitleFont(42);
   dBr__6->GetYaxis()->SetTitle("Experiments");
   dBr__6->GetYaxis()->CenterTitle(true);
   dBr__6->GetYaxis()->SetNdivisions(4000510);
   dBr__6->GetYaxis()->SetLabelFont(42);
   dBr__6->GetYaxis()->SetTitleSize(0.04);
   dBr__6->GetYaxis()->SetTitleOffset(1.1);
   dBr__6->GetYaxis()->SetTitleFont(42);
   dBr__6->GetZaxis()->SetLabelFont(42);
   dBr__6->GetZaxis()->SetTitleOffset(1);
   dBr__6->GetZaxis()->SetTitleFont(42);
   dBr__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
