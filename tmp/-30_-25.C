void -30_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__90 = new TH1D("h1_ratio__90","",630,-1575,1575);
   h1_ratio__90->SetBinContent(314,21);
   h1_ratio__90->SetBinContent(315,61.93243);
   h1_ratio__90->SetBinContent(316,70.00104);
   h1_ratio__90->SetBinContent(317,74.60806);
   h1_ratio__90->SetBinContent(318,63.96395);
   h1_ratio__90->SetBinContent(319,67.55953);
   h1_ratio__90->SetBinContent(320,88.65326);
   h1_ratio__90->SetBinContent(321,32.59285);
   h1_ratio__90->SetBinError(314,4.586045);
   h1_ratio__90->SetBinError(315,7.82016);
   h1_ratio__90->SetBinError(316,8.213658);
   h1_ratio__90->SetBinError(317,8.696314);
   h1_ratio__90->SetBinError(318,8.346584);
   h1_ratio__90->SetBinError(319,9.302597);
   h1_ratio__90->SetBinError(320,12.83684);
   h1_ratio__90->SetBinError(321,14.59309);
   h1_ratio__90->SetEntries(303.8616);
   h1_ratio__90->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__90->GetXaxis()->SetRange(296,335);
   h1_ratio__90->GetXaxis()->CenterTitle(true);
   h1_ratio__90->GetXaxis()->SetLabelFont(42);
   h1_ratio__90->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__90->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__90->GetXaxis()->SetTitleFont(42);
   h1_ratio__90->GetYaxis()->SetTitle("Tracks");
   h1_ratio__90->GetYaxis()->CenterTitle(true);
   h1_ratio__90->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__90->GetYaxis()->SetLabelFont(42);
   h1_ratio__90->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__90->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__90->GetYaxis()->SetTitleFont(42);
   h1_ratio__90->GetZaxis()->SetLabelFont(42);
   h1_ratio__90->GetZaxis()->SetTitleOffset(1);
   h1_ratio__90->GetZaxis()->SetTitleFont(42);
   h1_ratio__90->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
