void hBr_gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 10 19:40:00 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-50,50);
   h1__1->SetBinContent(65,2);
   h1__1->SetBinContent(66,11);
   h1__1->SetBinContent(67,16);
   h1__1->SetBinContent(68,38);
   h1__1->SetBinContent(69,34);
   h1__1->SetBinContent(70,20);
   h1__1->SetBinContent(71,23);
   h1__1->SetBinContent(72,43);
   h1__1->SetBinContent(73,17);
   h1__1->SetBinContent(74,7);
   h1__1->SetBinContent(75,18);
   h1__1->SetBinContent(76,18);
   h1__1->SetBinContent(77,12);
   h1__1->SetBinContent(78,5);
   h1__1->SetBinContent(79,2);
   h1__1->SetEntries(266);
   h1__1->GetXaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   h1__1->GetXaxis()->CenterTitle(true);
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetLabelSize(0.035);
   h1__1->GetXaxis()->SetTitleOffset(1.1);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Entries");
   h1__1->GetYaxis()->CenterTitle(true);
   h1__1->GetYaxis()->SetNdivisions(4000510);
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetLabelSize(0.035);
   h1__1->GetYaxis()->SetTitleOffset(1.1);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetLabelSize(0.035);
   h1__1->GetZaxis()->SetTitleSize(0.035);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
