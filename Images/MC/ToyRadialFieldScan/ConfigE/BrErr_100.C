void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",1000,0,4);
   __11->SetBinContent(133,1);
   __11->SetBinContent(134,2);
   __11->SetBinContent(135,3);
   __11->SetBinContent(136,4);
   __11->SetBinContent(137,9);
   __11->SetBinContent(138,10);
   __11->SetBinContent(139,31);
   __11->SetBinContent(140,45);
   __11->SetBinContent(141,55);
   __11->SetBinContent(142,57);
   __11->SetBinContent(143,75);
   __11->SetBinContent(144,96);
   __11->SetBinContent(145,105);
   __11->SetBinContent(146,111);
   __11->SetBinContent(147,91);
   __11->SetBinContent(148,80);
   __11->SetBinContent(149,64);
   __11->SetBinContent(150,46);
   __11->SetBinContent(151,32);
   __11->SetBinContent(152,27);
   __11->SetBinContent(153,28);
   __11->SetBinContent(154,9);
   __11->SetBinContent(155,8);
   __11->SetBinContent(156,4);
   __11->SetBinContent(157,5);
   __11->SetBinContent(158,1);
   __11->SetBinContent(160,1);
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
