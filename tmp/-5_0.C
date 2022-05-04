void -5_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__110 = new TH1D("h1_ratio__110","",630,-1575,1575);
   h1_ratio__110->SetBinContent(311,16);
   h1_ratio__110->SetBinContent(312,86.32163);
   h1_ratio__110->SetBinContent(313,154.088);
   h1_ratio__110->SetBinContent(314,148.2392);
   h1_ratio__110->SetBinContent(315,152.6368);
   h1_ratio__110->SetBinContent(316,181.5435);
   h1_ratio__110->SetBinContent(317,145.62);
   h1_ratio__110->SetBinContent(318,169.503);
   h1_ratio__110->SetBinContent(319,126.0922);
   h1_ratio__110->SetBinContent(320,53.84242);
   h1_ratio__110->SetBinContent(321,1e+09);
   h1_ratio__110->SetBinError(311,4.00098);
   h1_ratio__110->SetBinError(312,7.825514);
   h1_ratio__110->SetBinError(313,9.672098);
   h1_ratio__110->SetBinError(314,9.109734);
   h1_ratio__110->SetBinError(315,9.062529);
   h1_ratio__110->SetBinError(316,9.931498);
   h1_ratio__110->SetBinError(317,9.016465);
   h1_ratio__110->SetBinError(318,10.17418);
   h1_ratio__110->SetBinError(319,9.442751);
   h1_ratio__110->SetBinError(320,7.401919);
   h1_ratio__110->SetEntries(1952.319);
   h1_ratio__110->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__110->GetXaxis()->SetRange(296,335);
   h1_ratio__110->GetXaxis()->CenterTitle(true);
   h1_ratio__110->GetXaxis()->SetLabelFont(42);
   h1_ratio__110->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__110->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__110->GetXaxis()->SetTitleFont(42);
   h1_ratio__110->GetYaxis()->SetTitle("Tracks");
   h1_ratio__110->GetYaxis()->CenterTitle(true);
   h1_ratio__110->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__110->GetYaxis()->SetLabelFont(42);
   h1_ratio__110->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__110->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__110->GetYaxis()->SetTitleFont(42);
   h1_ratio__110->GetZaxis()->SetLabelFont(42);
   h1_ratio__110->GetZaxis()->SetTitleOffset(1);
   h1_ratio__110->GetZaxis()->SetTitleFont(42);
   h1_ratio__110->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
