void 0_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__114 = new TH1D("h1_ratio__114","",630,-1575,1575);
   h1_ratio__114->SetBinContent(310,1e+09);
   h1_ratio__114->SetBinContent(311,40);
   h1_ratio__114->SetBinContent(312,134.426);
   h1_ratio__114->SetBinContent(313,179.5677);
   h1_ratio__114->SetBinContent(314,167.1964);
   h1_ratio__114->SetBinContent(315,175.7294);
   h1_ratio__114->SetBinContent(316,163.3836);
   h1_ratio__114->SetBinContent(317,152.1577);
   h1_ratio__114->SetBinContent(318,146.0776);
   h1_ratio__114->SetBinContent(319,80.14576);
   h1_ratio__114->SetBinContent(320,14.15199);
   h1_ratio__114->SetBinError(311,6.328458);
   h1_ratio__114->SetBinError(312,9.746879);
   h1_ratio__114->SetBinError(313,10.39604);
   h1_ratio__114->SetBinError(314,9.629933);
   h1_ratio__114->SetBinError(315,9.744175);
   h1_ratio__114->SetBinError(316,9.333086);
   h1_ratio__114->SetBinError(317,9.163711);
   h1_ratio__114->SetBinError(318,9.35357);
   h1_ratio__114->SetBinError(319,7.548797);
   h1_ratio__114->SetBinError(320,3.783104);
   h1_ratio__114->SetEntries(2018.598);
   h1_ratio__114->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__114->GetXaxis()->SetRange(296,335);
   h1_ratio__114->GetXaxis()->CenterTitle(true);
   h1_ratio__114->GetXaxis()->SetLabelFont(42);
   h1_ratio__114->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__114->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__114->GetXaxis()->SetTitleFont(42);
   h1_ratio__114->GetYaxis()->SetTitle("Tracks");
   h1_ratio__114->GetYaxis()->CenterTitle(true);
   h1_ratio__114->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__114->GetYaxis()->SetLabelFont(42);
   h1_ratio__114->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__114->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__114->GetYaxis()->SetTitleFont(42);
   h1_ratio__114->GetZaxis()->SetLabelFont(42);
   h1_ratio__114->GetZaxis()->SetTitleOffset(1);
   h1_ratio__114->GetZaxis()->SetTitleFont(42);
   h1_ratio__114->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
