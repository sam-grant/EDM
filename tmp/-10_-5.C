void -10_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__106 = new TH1D("h1_ratio__106","",630,-1575,1575);
   h1_ratio__106->SetBinContent(311,1e+09);
   h1_ratio__106->SetBinContent(312,55.15293);
   h1_ratio__106->SetBinContent(313,121.6598);
   h1_ratio__106->SetBinContent(314,157.0601);
   h1_ratio__106->SetBinContent(315,160.2223);
   h1_ratio__106->SetBinContent(316,150.1123);
   h1_ratio__106->SetBinContent(317,160.083);
   h1_ratio__106->SetBinContent(318,143.1701);
   h1_ratio__106->SetBinContent(319,120.6628);
   h1_ratio__106->SetBinContent(320,91.52745);
   h1_ratio__106->SetBinContent(321,29.2128);
   h1_ratio__106->SetBinError(312,6.211022);
   h1_ratio__106->SetBinError(313,8.556536);
   h1_ratio__106->SetBinError(314,9.344727);
   h1_ratio__106->SetBinError(315,9.260252);
   h1_ratio__106->SetBinError(316,8.946058);
   h1_ratio__106->SetBinError(317,9.409811);
   h1_ratio__106->SetBinError(318,9.264119);
   h1_ratio__106->SetBinError(319,9.246279);
   h1_ratio__106->SetBinError(320,9.609645);
   h1_ratio__106->SetBinError(321,10.33343);
   h1_ratio__106->SetEntries(1718.132);
   h1_ratio__106->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__106->GetXaxis()->SetRange(296,335);
   h1_ratio__106->GetXaxis()->CenterTitle(true);
   h1_ratio__106->GetXaxis()->SetLabelFont(42);
   h1_ratio__106->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__106->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__106->GetXaxis()->SetTitleFont(42);
   h1_ratio__106->GetYaxis()->SetTitle("Tracks");
   h1_ratio__106->GetYaxis()->CenterTitle(true);
   h1_ratio__106->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__106->GetYaxis()->SetLabelFont(42);
   h1_ratio__106->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__106->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__106->GetYaxis()->SetTitleFont(42);
   h1_ratio__106->GetZaxis()->SetLabelFont(42);
   h1_ratio__106->GetZaxis()->SetTitleOffset(1);
   h1_ratio__106->GetZaxis()->SetTitleFont(42);
   h1_ratio__106->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
