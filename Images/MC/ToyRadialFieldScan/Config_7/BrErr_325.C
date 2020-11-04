void BrErr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:13 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 325",1000,0,4);
   __38->SetBinContent(206,1);
   __38->SetBinContent(208,1);
   __38->SetBinContent(209,3);
   __38->SetBinContent(210,5);
   __38->SetBinContent(211,7);
   __38->SetBinContent(212,21);
   __38->SetBinContent(213,26);
   __38->SetBinContent(214,43);
   __38->SetBinContent(215,55);
   __38->SetBinContent(216,71);
   __38->SetBinContent(217,87);
   __38->SetBinContent(218,106);
   __38->SetBinContent(219,89);
   __38->SetBinContent(220,107);
   __38->SetBinContent(221,85);
   __38->SetBinContent(222,81);
   __38->SetBinContent(223,60);
   __38->SetBinContent(224,54);
   __38->SetBinContent(225,30);
   __38->SetBinContent(226,26);
   __38->SetBinContent(227,24);
   __38->SetBinContent(228,8);
   __38->SetBinContent(229,6);
   __38->SetBinContent(230,3);
   __38->SetBinContent(231,1);
   __38->SetEntries(1000);
   __38->SetLineWidth(3);
   __38->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __38->GetXaxis()->CenterTitle(true);
   __38->GetXaxis()->SetLabelFont(42);
   __38->GetXaxis()->SetTitleSize(0.04);
   __38->GetXaxis()->SetTitleOffset(1.1);
   __38->GetXaxis()->SetTitleFont(42);
   __38->GetYaxis()->SetTitle("Trials");
   __38->GetYaxis()->CenterTitle(true);
   __38->GetYaxis()->SetNdivisions(4000510);
   __38->GetYaxis()->SetLabelFont(42);
   __38->GetYaxis()->SetTitleSize(0.04);
   __38->GetYaxis()->SetTitleOffset(1.1);
   __38->GetYaxis()->SetTitleFont(42);
   __38->GetZaxis()->SetLabelFont(42);
   __38->GetZaxis()->SetTitleOffset(1);
   __38->GetZaxis()->SetTitleFont(42);
   __38->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
