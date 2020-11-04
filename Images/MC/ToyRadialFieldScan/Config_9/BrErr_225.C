void BrErr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",1000,0,4);
   __26->SetBinContent(129,1);
   __26->SetBinContent(130,1);
   __26->SetBinContent(132,7);
   __26->SetBinContent(133,11);
   __26->SetBinContent(134,17);
   __26->SetBinContent(135,26);
   __26->SetBinContent(136,55);
   __26->SetBinContent(137,73);
   __26->SetBinContent(138,99);
   __26->SetBinContent(139,98);
   __26->SetBinContent(140,108);
   __26->SetBinContent(141,106);
   __26->SetBinContent(142,101);
   __26->SetBinContent(143,83);
   __26->SetBinContent(144,74);
   __26->SetBinContent(145,57);
   __26->SetBinContent(146,19);
   __26->SetBinContent(147,28);
   __26->SetBinContent(148,17);
   __26->SetBinContent(149,13);
   __26->SetBinContent(150,5);
   __26->SetBinContent(151,1);
   __26->SetEntries(1000);
   __26->SetLineWidth(3);
   __26->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Trials");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
