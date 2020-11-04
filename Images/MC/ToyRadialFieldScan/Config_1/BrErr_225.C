void BrErr_225()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__26 = new TH1D("__26","Number of sub-runs: 225",1000,0,4);
   __26->SetBinContent(155,1);
   __26->SetBinContent(156,1);
   __26->SetBinContent(158,1);
   __26->SetBinContent(159,1);
   __26->SetBinContent(160,8);
   __26->SetBinContent(161,10);
   __26->SetBinContent(162,25);
   __26->SetBinContent(163,24);
   __26->SetBinContent(164,37);
   __26->SetBinContent(165,63);
   __26->SetBinContent(166,77);
   __26->SetBinContent(167,92);
   __26->SetBinContent(168,109);
   __26->SetBinContent(169,95);
   __26->SetBinContent(170,88);
   __26->SetBinContent(171,85);
   __26->SetBinContent(172,63);
   __26->SetBinContent(173,56);
   __26->SetBinContent(174,63);
   __26->SetBinContent(175,32);
   __26->SetBinContent(176,22);
   __26->SetBinContent(177,21);
   __26->SetBinContent(178,13);
   __26->SetBinContent(179,6);
   __26->SetBinContent(181,3);
   __26->SetBinContent(182,2);
   __26->SetBinContent(183,1);
   __26->SetBinContent(184,1);
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
