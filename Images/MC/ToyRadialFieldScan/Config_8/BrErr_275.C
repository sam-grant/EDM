void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",1000,0,4);
   __32->SetBinContent(145,2);
   __32->SetBinContent(146,5);
   __32->SetBinContent(147,14);
   __32->SetBinContent(148,23);
   __32->SetBinContent(149,56);
   __32->SetBinContent(150,95);
   __32->SetBinContent(151,118);
   __32->SetBinContent(152,142);
   __32->SetBinContent(153,146);
   __32->SetBinContent(154,124);
   __32->SetBinContent(155,104);
   __32->SetBinContent(156,75);
   __32->SetBinContent(157,48);
   __32->SetBinContent(158,33);
   __32->SetBinContent(159,5);
   __32->SetBinContent(160,6);
   __32->SetBinContent(161,2);
   __32->SetBinContent(162,1);
   __32->SetBinContent(163,1);
   __32->SetEntries(1000);
   __32->SetLineWidth(3);
   __32->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Trials");
   __32->GetYaxis()->CenterTitle(true);
   __32->GetYaxis()->SetNdivisions(4000510);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleSize(0.04);
   __32->GetYaxis()->SetTitleOffset(1.1);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
