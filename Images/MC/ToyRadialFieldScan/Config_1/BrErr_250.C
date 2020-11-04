void BrErr_250()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",1000,0,4);
   __29->SetBinContent(149,1);
   __29->SetBinContent(150,2);
   __29->SetBinContent(151,2);
   __29->SetBinContent(152,6);
   __29->SetBinContent(153,12);
   __29->SetBinContent(154,21);
   __29->SetBinContent(155,39);
   __29->SetBinContent(156,51);
   __29->SetBinContent(157,56);
   __29->SetBinContent(158,88);
   __29->SetBinContent(159,94);
   __29->SetBinContent(160,116);
   __29->SetBinContent(161,109);
   __29->SetBinContent(162,102);
   __29->SetBinContent(163,72);
   __29->SetBinContent(164,73);
   __29->SetBinContent(165,47);
   __29->SetBinContent(166,39);
   __29->SetBinContent(167,25);
   __29->SetBinContent(168,18);
   __29->SetBinContent(169,12);
   __29->SetBinContent(170,5);
   __29->SetBinContent(171,4);
   __29->SetBinContent(172,2);
   __29->SetBinContent(173,3);
   __29->SetBinContent(177,1);
   __29->SetEntries(1000);
   __29->SetLineWidth(3);
   __29->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __29->GetXaxis()->CenterTitle(true);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleSize(0.04);
   __29->GetXaxis()->SetTitleOffset(1.1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetTitle("Trials");
   __29->GetYaxis()->CenterTitle(true);
   __29->GetYaxis()->SetNdivisions(4000510);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleSize(0.04);
   __29->GetYaxis()->SetTitleOffset(1.1);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
