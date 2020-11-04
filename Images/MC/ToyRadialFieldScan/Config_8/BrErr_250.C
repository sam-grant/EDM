void BrErr_250()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",1000,0,4);
   __29->SetBinContent(151,1);
   __29->SetBinContent(152,4);
   __29->SetBinContent(153,4);
   __29->SetBinContent(154,20);
   __29->SetBinContent(155,24);
   __29->SetBinContent(156,61);
   __29->SetBinContent(157,70);
   __29->SetBinContent(158,117);
   __29->SetBinContent(159,116);
   __29->SetBinContent(160,128);
   __29->SetBinContent(161,133);
   __29->SetBinContent(162,105);
   __29->SetBinContent(163,77);
   __29->SetBinContent(164,58);
   __29->SetBinContent(165,36);
   __29->SetBinContent(166,25);
   __29->SetBinContent(167,8);
   __29->SetBinContent(168,8);
   __29->SetBinContent(169,3);
   __29->SetBinContent(170,1);
   __29->SetBinContent(171,1);
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
