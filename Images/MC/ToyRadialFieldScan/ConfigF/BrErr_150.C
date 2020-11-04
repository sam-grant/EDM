void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:16:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",1000,0,4);
   __17->SetBinContent(137,1);
   __17->SetBinContent(139,2);
   __17->SetBinContent(140,6);
   __17->SetBinContent(141,4);
   __17->SetBinContent(142,17);
   __17->SetBinContent(143,18);
   __17->SetBinContent(144,28);
   __17->SetBinContent(145,38);
   __17->SetBinContent(146,47);
   __17->SetBinContent(147,80);
   __17->SetBinContent(148,70);
   __17->SetBinContent(149,80);
   __17->SetBinContent(150,104);
   __17->SetBinContent(151,91);
   __17->SetBinContent(152,83);
   __17->SetBinContent(153,78);
   __17->SetBinContent(154,55);
   __17->SetBinContent(155,55);
   __17->SetBinContent(156,42);
   __17->SetBinContent(157,35);
   __17->SetBinContent(158,24);
   __17->SetBinContent(159,14);
   __17->SetBinContent(160,9);
   __17->SetBinContent(161,9);
   __17->SetBinContent(162,5);
   __17->SetBinContent(163,2);
   __17->SetBinContent(164,2);
   __17->SetBinContent(165,1);
   __17->SetEntries(1000);
   __17->SetLineWidth(3);
   __17->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Trials");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
