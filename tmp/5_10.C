void 5_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__118 = new TH1D("h1_ratio__118","",630,-1575,1575);
   h1_ratio__118->SetBinContent(310,10);
   h1_ratio__118->SetBinContent(311,26.2191);
   h1_ratio__118->SetBinContent(312,41.77149);
   h1_ratio__118->SetBinContent(313,40.88085);
   h1_ratio__118->SetBinContent(314,44.31725);
   h1_ratio__118->SetBinContent(315,42.26267);
   h1_ratio__118->SetBinContent(316,40.47151);
   h1_ratio__118->SetBinContent(317,40.82692);
   h1_ratio__118->SetBinContent(318,32.87353);
   h1_ratio__118->SetBinContent(319,12.33833);
   h1_ratio__118->SetBinContent(320,1e+09);
   h1_ratio__118->SetBinError(310,3.16424);
   h1_ratio__118->SetBinError(311,2.680328);
   h1_ratio__118->SetBinError(312,2.836449);
   h1_ratio__118->SetBinError(313,2.592085);
   h1_ratio__118->SetBinError(314,2.596154);
   h1_ratio__118->SetBinError(315,2.496876);
   h1_ratio__118->SetBinError(316,2.437799);
   h1_ratio__118->SetBinError(317,2.490936);
   h1_ratio__118->SetBinError(318,2.329248);
   h1_ratio__118->SetBinError(319,1.543472);
   h1_ratio__118->SetEntries(1700.92);
   h1_ratio__118->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__118->GetXaxis()->SetRange(296,335);
   h1_ratio__118->GetXaxis()->CenterTitle(true);
   h1_ratio__118->GetXaxis()->SetLabelFont(42);
   h1_ratio__118->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__118->GetXaxis()->SetTitleFont(42);
   h1_ratio__118->GetYaxis()->SetTitle("Tracks");
   h1_ratio__118->GetYaxis()->CenterTitle(true);
   h1_ratio__118->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__118->GetYaxis()->SetLabelFont(42);
   h1_ratio__118->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__118->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__118->GetYaxis()->SetTitleFont(42);
   h1_ratio__118->GetZaxis()->SetLabelFont(42);
   h1_ratio__118->GetZaxis()->SetTitleOffset(1);
   h1_ratio__118->GetZaxis()->SetTitleFont(42);
   h1_ratio__118->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
