void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(150,1);
   __11->SetBinContent(151,1);
   __11->SetBinContent(152,6);
   __11->SetBinContent(153,16);
   __11->SetBinContent(154,23);
   __11->SetBinContent(155,54);
   __11->SetBinContent(156,68);
   __11->SetBinContent(157,97);
   __11->SetBinContent(158,120);
   __11->SetBinContent(159,141);
   __11->SetBinContent(160,113);
   __11->SetBinContent(161,97);
   __11->SetBinContent(162,94);
   __11->SetBinContent(163,72);
   __11->SetBinContent(164,40);
   __11->SetBinContent(165,22);
   __11->SetBinContent(166,15);
   __11->SetBinContent(167,7);
   __11->SetBinContent(168,11);
   __11->SetBinContent(169,1);
   __11->SetBinContent(170,1);
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
