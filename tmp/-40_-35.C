void -40_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__82 = new TH1D("h1_ratio__82","",630,-1575,1575);
   h1_ratio__82->SetBinContent(314,1e+09);
   h1_ratio__82->SetBinContent(315,11);
   h1_ratio__82->SetBinContent(316,29.3191);
   h1_ratio__82->SetBinContent(317,28.01852);
   h1_ratio__82->SetBinContent(318,19.0112);
   h1_ratio__82->SetBinContent(319,17.76912);
   h1_ratio__82->SetBinContent(320,27.06902);
   h1_ratio__82->SetBinContent(321,1e+09);
   h1_ratio__82->SetBinError(315,3.320593);
   h1_ratio__82->SetBinError(316,5.461766);
   h1_ratio__82->SetBinError(317,5.408585);
   h1_ratio__82->SetBinError(318,4.620423);
   h1_ratio__82->SetBinError(319,4.937788);
   h1_ratio__82->SetBinError(320,7.255783);
   h1_ratio__82->SetEntries(78.42924);
   h1_ratio__82->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__82->GetXaxis()->SetRange(296,335);
   h1_ratio__82->GetXaxis()->CenterTitle(true);
   h1_ratio__82->GetXaxis()->SetLabelFont(42);
   h1_ratio__82->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__82->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__82->GetXaxis()->SetTitleFont(42);
   h1_ratio__82->GetYaxis()->SetTitle("Tracks");
   h1_ratio__82->GetYaxis()->CenterTitle(true);
   h1_ratio__82->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__82->GetYaxis()->SetLabelFont(42);
   h1_ratio__82->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__82->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__82->GetYaxis()->SetTitleFont(42);
   h1_ratio__82->GetZaxis()->SetLabelFont(42);
   h1_ratio__82->GetZaxis()->SetTitleOffset(1);
   h1_ratio__82->GetZaxis()->SetTitleFont(42);
   h1_ratio__82->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
