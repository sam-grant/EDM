void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,4);
   __5->SetBinContent(143,1);
   __5->SetBinContent(144,5);
   __5->SetBinContent(145,8);
   __5->SetBinContent(146,21);
   __5->SetBinContent(147,39);
   __5->SetBinContent(148,51);
   __5->SetBinContent(149,99);
   __5->SetBinContent(150,106);
   __5->SetBinContent(151,111);
   __5->SetBinContent(152,132);
   __5->SetBinContent(153,131);
   __5->SetBinContent(154,101);
   __5->SetBinContent(155,62);
   __5->SetBinContent(156,60);
   __5->SetBinContent(157,33);
   __5->SetBinContent(158,25);
   __5->SetBinContent(159,7);
   __5->SetBinContent(160,4);
   __5->SetBinContent(161,2);
   __5->SetBinContent(162,1);
   __5->SetBinContent(164,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
