void BrErr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:52:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 325",1000,0,4);
   __38->SetBinContent(147,1);
   __38->SetBinContent(148,1);
   __38->SetBinContent(150,3);
   __38->SetBinContent(151,4);
   __38->SetBinContent(152,5);
   __38->SetBinContent(153,14);
   __38->SetBinContent(154,9);
   __38->SetBinContent(155,22);
   __38->SetBinContent(156,39);
   __38->SetBinContent(157,47);
   __38->SetBinContent(158,61);
   __38->SetBinContent(159,46);
   __38->SetBinContent(160,60);
   __38->SetBinContent(161,71);
   __38->SetBinContent(162,85);
   __38->SetBinContent(163,76);
   __38->SetBinContent(164,90);
   __38->SetBinContent(165,79);
   __38->SetBinContent(166,62);
   __38->SetBinContent(167,43);
   __38->SetBinContent(168,41);
   __38->SetBinContent(169,42);
   __38->SetBinContent(170,31);
   __38->SetBinContent(171,23);
   __38->SetBinContent(172,15);
   __38->SetBinContent(173,5);
   __38->SetBinContent(174,5);
   __38->SetBinContent(175,10);
   __38->SetBinContent(176,3);
   __38->SetBinContent(177,4);
   __38->SetBinContent(178,3);
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
