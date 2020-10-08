void dBr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 150",300,0,3);
   __11->SetBinContent(0,470);
   __11->SetBinContent(62,2);
   __11->SetBinContent(63,1);
   __11->SetBinContent(64,14);
   __11->SetBinContent(65,15);
   __11->SetBinContent(66,44);
   __11->SetBinContent(67,79);
   __11->SetBinContent(68,97);
   __11->SetBinContent(69,108);
   __11->SetBinContent(70,66);
   __11->SetBinContent(71,56);
   __11->SetBinContent(72,24);
   __11->SetBinContent(73,12);
   __11->SetBinContent(74,6);
   __11->SetBinContent(75,5);
   __11->SetBinContent(77,1);
   __11->SetEntries(1000);
   __11->SetLineWidth(3);
   __11->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Experiments");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
