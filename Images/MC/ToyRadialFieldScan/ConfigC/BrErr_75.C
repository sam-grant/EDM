void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",1000,0,4);
   __8->SetBinContent(155,1);
   __8->SetBinContent(156,1);
   __8->SetBinContent(157,1);
   __8->SetBinContent(158,3);
   __8->SetBinContent(159,4);
   __8->SetBinContent(160,8);
   __8->SetBinContent(161,23);
   __8->SetBinContent(162,32);
   __8->SetBinContent(163,53);
   __8->SetBinContent(164,61);
   __8->SetBinContent(165,94);
   __8->SetBinContent(166,115);
   __8->SetBinContent(167,138);
   __8->SetBinContent(168,96);
   __8->SetBinContent(169,116);
   __8->SetBinContent(170,74);
   __8->SetBinContent(171,58);
   __8->SetBinContent(172,47);
   __8->SetBinContent(173,34);
   __8->SetBinContent(174,14);
   __8->SetBinContent(175,16);
   __8->SetBinContent(176,6);
   __8->SetBinContent(177,3);
   __8->SetBinContent(178,1);
   __8->SetBinContent(179,1);
   __8->SetEntries(1000);
   __8->SetLineWidth(3);
   __8->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
