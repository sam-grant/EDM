void dBr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  6 23:07:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *dBr__3 = new TH1D("dBr__3","Number of sub-runs: 75",300,0,3);
   dBr__3->SetBinContent(90,1);
   dBr__3->SetBinContent(91,4);
   dBr__3->SetBinContent(92,10);
   dBr__3->SetBinContent(93,2);
   dBr__3->SetBinContent(94,11);
   dBr__3->SetBinContent(95,25);
   dBr__3->SetBinContent(96,33);
   dBr__3->SetBinContent(97,38);
   dBr__3->SetBinContent(98,46);
   dBr__3->SetBinContent(99,52);
   dBr__3->SetBinContent(100,61);
   dBr__3->SetBinContent(101,85);
   dBr__3->SetBinContent(102,67);
   dBr__3->SetBinContent(103,73);
   dBr__3->SetBinContent(104,74);
   dBr__3->SetBinContent(105,63);
   dBr__3->SetBinContent(106,75);
   dBr__3->SetBinContent(107,62);
   dBr__3->SetBinContent(108,47);
   dBr__3->SetBinContent(109,41);
   dBr__3->SetBinContent(110,34);
   dBr__3->SetBinContent(111,29);
   dBr__3->SetBinContent(112,25);
   dBr__3->SetBinContent(113,12);
   dBr__3->SetBinContent(114,10);
   dBr__3->SetBinContent(115,8);
   dBr__3->SetBinContent(116,3);
   dBr__3->SetBinContent(117,1);
   dBr__3->SetBinContent(118,3);
   dBr__3->SetBinContent(119,2);
   dBr__3->SetBinContent(120,2);
   dBr__3->SetBinContent(123,1);
   dBr__3->SetEntries(1000);
   dBr__3->SetLineWidth(3);
   dBr__3->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   dBr__3->GetXaxis()->CenterTitle(true);
   dBr__3->GetXaxis()->SetLabelFont(42);
   dBr__3->GetXaxis()->SetTitleSize(0.04);
   dBr__3->GetXaxis()->SetTitleOffset(1.1);
   dBr__3->GetXaxis()->SetTitleFont(42);
   dBr__3->GetYaxis()->SetTitle("Experiments");
   dBr__3->GetYaxis()->CenterTitle(true);
   dBr__3->GetYaxis()->SetNdivisions(4000510);
   dBr__3->GetYaxis()->SetLabelFont(42);
   dBr__3->GetYaxis()->SetTitleSize(0.04);
   dBr__3->GetYaxis()->SetTitleOffset(1.1);
   dBr__3->GetYaxis()->SetTitleFont(42);
   dBr__3->GetZaxis()->SetLabelFont(42);
   dBr__3->GetZaxis()->SetTitleOffset(1);
   dBr__3->GetZaxis()->SetTitleFont(42);
   dBr__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
