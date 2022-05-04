void -35_-30()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__86 = new TH1D("h1_ratio__86","",630,-1575,1575);
   h1_ratio__86->SetBinContent(315,47.15905);
   h1_ratio__86->SetBinContent(316,47.82483);
   h1_ratio__86->SetBinContent(317,41.61149);
   h1_ratio__86->SetBinContent(318,51.68817);
   h1_ratio__86->SetBinContent(319,47.33765);
   h1_ratio__86->SetBinContent(320,53.07716);
   h1_ratio__86->SetBinContent(321,1e+09);
   h1_ratio__86->SetBinError(315,6.898365);
   h1_ratio__86->SetBinError(316,6.851769);
   h1_ratio__86->SetBinError(317,6.514889);
   h1_ratio__86->SetBinError(318,7.562929);
   h1_ratio__86->SetBinError(319,7.804417);
   h1_ratio__86->SetBinError(320,9.887638);
   h1_ratio__86->SetEntries(222.4941);
   h1_ratio__86->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__86->GetXaxis()->SetRange(296,335);
   h1_ratio__86->GetXaxis()->CenterTitle(true);
   h1_ratio__86->GetXaxis()->SetLabelFont(42);
   h1_ratio__86->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__86->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__86->GetXaxis()->SetTitleFont(42);
   h1_ratio__86->GetYaxis()->SetTitle("Tracks");
   h1_ratio__86->GetYaxis()->CenterTitle(true);
   h1_ratio__86->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__86->GetYaxis()->SetLabelFont(42);
   h1_ratio__86->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__86->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__86->GetYaxis()->SetTitleFont(42);
   h1_ratio__86->GetZaxis()->SetLabelFont(42);
   h1_ratio__86->GetZaxis()->SetTitleOffset(1);
   h1_ratio__86->GetZaxis()->SetTitleFont(42);
   h1_ratio__86->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
