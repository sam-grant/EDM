void BrErr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:13 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",1000,0,4);
   __26->SetBinContent(158,2);
   __26->SetBinContent(159,1);
   __26->SetBinContent(160,7);
   __26->SetBinContent(161,25);
   __26->SetBinContent(162,40);
   __26->SetBinContent(163,87);
   __26->SetBinContent(164,145);
   __26->SetBinContent(165,176);
   __26->SetBinContent(166,170);
   __26->SetBinContent(167,135);
   __26->SetBinContent(168,103);
   __26->SetBinContent(169,60);
   __26->SetBinContent(170,35);
   __26->SetBinContent(171,7);
   __26->SetBinContent(172,4);
   __26->SetBinContent(173,2);
   __26->SetBinContent(174,1);
   __26->SetEntries(1000);
   __26->SetLineWidth(3);
   __26->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __26->GetXaxis()->CenterTitle(true);
   __26->GetXaxis()->SetLabelFont(42);
   __26->GetXaxis()->SetTitleSize(0.04);
   __26->GetXaxis()->SetTitleOffset(1.1);
   __26->GetXaxis()->SetTitleFont(42);
   __26->GetYaxis()->SetTitle("Trials");
   __26->GetYaxis()->CenterTitle(true);
   __26->GetYaxis()->SetNdivisions(4000510);
   __26->GetYaxis()->SetLabelFont(42);
   __26->GetYaxis()->SetTitleSize(0.04);
   __26->GetYaxis()->SetTitleOffset(1.1);
   __26->GetYaxis()->SetTitleFont(42);
   __26->GetZaxis()->SetLabelFont(42);
   __26->GetZaxis()->SetTitleOffset(1);
   __26->GetZaxis()->SetTitleFont(42);
   __26->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
