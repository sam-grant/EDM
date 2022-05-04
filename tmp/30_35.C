void 30_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__138 = new TH1D("h1_ratio__138","",630,-1575,1575);
   h1_ratio__138->SetBinContent(310,1e+09);
   h1_ratio__138->SetBinContent(311,8.27042);
   h1_ratio__138->SetBinContent(312,7.136704);
   h1_ratio__138->SetBinContent(313,6.103296);
   h1_ratio__138->SetBinContent(314,7.322452);
   h1_ratio__138->SetBinContent(315,4.128355);
   h1_ratio__138->SetBinContent(316,6.141252);
   h1_ratio__138->SetBinContent(317,1e+09);
   h1_ratio__138->SetBinContent(319,1e+09);
   h1_ratio__138->SetBinError(311,1.540908);
   h1_ratio__138->SetBinError(312,1.176649);
   h1_ratio__138->SetBinError(313,1.00585);
   h1_ratio__138->SetBinError(314,1.049159);
   h1_ratio__138->SetBinError(315,0.7814876);
   h1_ratio__138->SetBinError(316,0.949967);
   h1_ratio__138->SetEntries(167.7484);
   h1_ratio__138->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__138->GetXaxis()->SetRange(296,335);
   h1_ratio__138->GetXaxis()->CenterTitle(true);
   h1_ratio__138->GetXaxis()->SetLabelFont(42);
   h1_ratio__138->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__138->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__138->GetXaxis()->SetTitleFont(42);
   h1_ratio__138->GetYaxis()->SetTitle("Tracks");
   h1_ratio__138->GetYaxis()->CenterTitle(true);
   h1_ratio__138->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__138->GetYaxis()->SetLabelFont(42);
   h1_ratio__138->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__138->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__138->GetYaxis()->SetTitleFont(42);
   h1_ratio__138->GetZaxis()->SetLabelFont(42);
   h1_ratio__138->GetZaxis()->SetTitleOffset(1);
   h1_ratio__138->GetZaxis()->SetTitleFont(42);
   h1_ratio__138->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
