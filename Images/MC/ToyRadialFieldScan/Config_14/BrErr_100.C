void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:19 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(138,2);
   __11->SetBinContent(139,2);
   __11->SetBinContent(140,3);
   __11->SetBinContent(141,4);
   __11->SetBinContent(142,8);
   __11->SetBinContent(143,9);
   __11->SetBinContent(144,32);
   __11->SetBinContent(145,31);
   __11->SetBinContent(146,52);
   __11->SetBinContent(147,51);
   __11->SetBinContent(148,69);
   __11->SetBinContent(149,81);
   __11->SetBinContent(150,91);
   __11->SetBinContent(151,105);
   __11->SetBinContent(152,95);
   __11->SetBinContent(153,82);
   __11->SetBinContent(154,69);
   __11->SetBinContent(155,58);
   __11->SetBinContent(156,44);
   __11->SetBinContent(157,29);
   __11->SetBinContent(158,22);
   __11->SetBinContent(159,31);
   __11->SetBinContent(160,10);
   __11->SetBinContent(161,6);
   __11->SetBinContent(162,4);
   __11->SetBinContent(163,7);
   __11->SetBinContent(164,1);
   __11->SetBinContent(165,1);
   __11->SetBinContent(167,1);
   __11->SetEntries(1000);
   __11->SetLineWidth(3);
   __11->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
