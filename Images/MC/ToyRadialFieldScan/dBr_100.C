void dBr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *dBr__4 = new TH1D("dBr__4","Number of sub-runs: 100",300,0,3);
   dBr__4->SetBinContent(79,1);
   dBr__4->SetBinContent(80,4);
   dBr__4->SetBinContent(81,5);
   dBr__4->SetBinContent(82,13);
   dBr__4->SetBinContent(83,14);
   dBr__4->SetBinContent(84,30);
   dBr__4->SetBinContent(85,53);
   dBr__4->SetBinContent(86,55);
   dBr__4->SetBinContent(87,95);
   dBr__4->SetBinContent(88,113);
   dBr__4->SetBinContent(89,97);
   dBr__4->SetBinContent(90,100);
   dBr__4->SetBinContent(91,98);
   dBr__4->SetBinContent(92,77);
   dBr__4->SetBinContent(93,66);
   dBr__4->SetBinContent(94,64);
   dBr__4->SetBinContent(95,30);
   dBr__4->SetBinContent(96,27);
   dBr__4->SetBinContent(97,23);
   dBr__4->SetBinContent(98,9);
   dBr__4->SetBinContent(99,9);
   dBr__4->SetBinContent(100,8);
   dBr__4->SetBinContent(101,5);
   dBr__4->SetBinContent(102,1);
   dBr__4->SetBinContent(103,2);
   dBr__4->SetBinContent(104,1);
   dBr__4->SetEntries(1000);
   dBr__4->SetLineWidth(3);
   dBr__4->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__4->GetXaxis()->CenterTitle(true);
   dBr__4->GetXaxis()->SetLabelFont(42);
   dBr__4->GetXaxis()->SetTitleSize(0.04);
   dBr__4->GetXaxis()->SetTitleOffset(1.1);
   dBr__4->GetXaxis()->SetTitleFont(42);
   dBr__4->GetYaxis()->SetTitle("Experiments");
   dBr__4->GetYaxis()->CenterTitle(true);
   dBr__4->GetYaxis()->SetNdivisions(4000510);
   dBr__4->GetYaxis()->SetLabelFont(42);
   dBr__4->GetYaxis()->SetTitleSize(0.04);
   dBr__4->GetYaxis()->SetTitleOffset(1.1);
   dBr__4->GetYaxis()->SetTitleFont(42);
   dBr__4->GetZaxis()->SetLabelFont(42);
   dBr__4->GetZaxis()->SetTitleOffset(1);
   dBr__4->GetZaxis()->SetTitleFont(42);
   dBr__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
