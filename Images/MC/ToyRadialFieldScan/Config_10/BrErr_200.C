void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:55:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(122,7);
   __23->SetBinContent(123,8);
   __23->SetBinContent(124,23);
   __23->SetBinContent(125,35);
   __23->SetBinContent(126,50);
   __23->SetBinContent(127,67);
   __23->SetBinContent(128,80);
   __23->SetBinContent(129,121);
   __23->SetBinContent(130,121);
   __23->SetBinContent(131,115);
   __23->SetBinContent(132,99);
   __23->SetBinContent(133,85);
   __23->SetBinContent(134,62);
   __23->SetBinContent(135,42);
   __23->SetBinContent(136,49);
   __23->SetBinContent(137,17);
   __23->SetBinContent(138,8);
   __23->SetBinContent(139,5);
   __23->SetBinContent(140,2);
   __23->SetBinContent(141,1);
   __23->SetBinContent(142,1);
   __23->SetBinContent(143,1);
   __23->SetBinContent(144,1);
   __23->SetEntries(1000);
   __23->SetLineWidth(3);
   __23->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
