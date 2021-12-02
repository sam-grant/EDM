void hBr_gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 16:16:38 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-50,50);
   h1__1->SetBinContent(73,2);
   h1__1->SetBinContent(74,11);
   h1__1->SetBinContent(75,16);
   h1__1->SetBinContent(76,38);
   h1__1->SetBinContent(77,36);
   h1__1->SetBinContent(78,18);
   h1__1->SetBinContent(79,26);
   h1__1->SetBinContent(80,41);
   h1__1->SetBinContent(81,16);
   h1__1->SetBinContent(82,7);
   h1__1->SetBinContent(83,21);
   h1__1->SetBinContent(84,16);
   h1__1->SetBinContent(85,11);
   h1__1->SetBinContent(86,5);
   h1__1->SetBinContent(87,2);
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
