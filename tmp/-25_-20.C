void -25_-20()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__94 = new TH1D("h1_ratio__94","",630,-1575,1575);
   h1_ratio__94->SetBinContent(313,8);
   h1_ratio__94->SetBinContent(314,71.11901);
   h1_ratio__94->SetBinContent(315,104.9731);
   h1_ratio__94->SetBinContent(316,99.1351);
   h1_ratio__94->SetBinContent(317,103.7066);
   h1_ratio__94->SetBinContent(318,101.8947);
   h1_ratio__94->SetBinContent(319,119.1405);
   h1_ratio__94->SetBinContent(320,111.5216);
   h1_ratio__94->SetBinContent(321,77.13179);
   h1_ratio__94->SetBinError(313,2.828993);
   h1_ratio__94->SetBinError(314,8.066954);
   h1_ratio__94->SetBinError(315,9.648105);
   h1_ratio__94->SetBinError(316,9.390587);
   h1_ratio__94->SetBinError(317,9.738181);
   h1_ratio__94->SetBinError(318,10.01703);
   h1_ratio__94->SetBinError(319,11.7742);
   h1_ratio__94->SetBinError(320,13.66249);
   h1_ratio__94->SetBinError(321,21.43374);
   h1_ratio__94->SetEntries(514.1762);
   h1_ratio__94->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__94->GetXaxis()->SetRange(296,335);
   h1_ratio__94->GetXaxis()->CenterTitle(true);
   h1_ratio__94->GetXaxis()->SetLabelFont(42);
   h1_ratio__94->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__94->GetXaxis()->SetTitleFont(42);
   h1_ratio__94->GetYaxis()->SetTitle("Tracks");
   h1_ratio__94->GetYaxis()->CenterTitle(true);
   h1_ratio__94->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__94->GetYaxis()->SetLabelFont(42);
   h1_ratio__94->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__94->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__94->GetYaxis()->SetTitleFont(42);
   h1_ratio__94->GetZaxis()->SetLabelFont(42);
   h1_ratio__94->GetZaxis()->SetTitleOffset(1);
   h1_ratio__94->GetZaxis()->SetTitleFont(42);
   h1_ratio__94->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
