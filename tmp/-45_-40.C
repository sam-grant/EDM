void -45_-40()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__78 = new TH1D("h1_ratio__78","",630,-1575,1575);
   h1_ratio__78->SetBinContent(316,7);
   h1_ratio__78->SetBinContent(317,13.40649);
   h1_ratio__78->SetBinContent(318,13.54164);
   h1_ratio__78->SetBinContent(319,10.546);
   h1_ratio__78->SetBinContent(320,1e+09);
   h1_ratio__78->SetBinContent(321,1e+09);
   h1_ratio__78->SetBinError(316,2.651044);
   h1_ratio__78->SetBinError(317,3.732523);
   h1_ratio__78->SetBinError(318,3.924247);
   h1_ratio__78->SetBinError(319,3.739806);
   h1_ratio__78->SetEntries(29.71992);
   h1_ratio__78->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__78->GetXaxis()->SetRange(296,335);
   h1_ratio__78->GetXaxis()->CenterTitle(true);
   h1_ratio__78->GetXaxis()->SetLabelFont(42);
   h1_ratio__78->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__78->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__78->GetXaxis()->SetTitleFont(42);
   h1_ratio__78->GetYaxis()->SetTitle("Tracks");
   h1_ratio__78->GetYaxis()->CenterTitle(true);
   h1_ratio__78->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__78->GetYaxis()->SetLabelFont(42);
   h1_ratio__78->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__78->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__78->GetYaxis()->SetTitleFont(42);
   h1_ratio__78->GetZaxis()->SetLabelFont(42);
   h1_ratio__78->GetZaxis()->SetTitleOffset(1);
   h1_ratio__78->GetZaxis()->SetTitleFont(42);
   h1_ratio__78->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
