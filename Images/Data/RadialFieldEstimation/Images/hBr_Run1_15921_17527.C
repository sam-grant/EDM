void hBr_Run1_15921_17527()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 28 23:47:22 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-50,50);
   h1__1->SetBinContent(56,6);
   h1__1->SetBinContent(57,10);
   h1__1->SetBinContent(58,5);
   h1__1->SetBinContent(59,14);
   h1__1->SetBinContent(60,34);
   h1__1->SetBinContent(61,20);
   h1__1->SetBinContent(62,27);
   h1__1->SetBinContent(63,15);
   h1__1->SetBinContent(64,12);
   h1__1->SetBinContent(65,26);
   h1__1->SetBinContent(66,44);
   h1__1->SetBinContent(67,37);
   h1__1->SetBinContent(68,17);
   h1__1->SetBinContent(69,25);
   h1__1->SetBinContent(70,38);
   h1__1->SetBinContent(71,32);
   h1__1->SetBinContent(72,27);
   h1__1->SetBinContent(73,44);
   h1__1->SetBinContent(74,20);
   h1__1->SetBinContent(75,13);
   h1__1->SetBinContent(76,9);
   h1__1->SetBinContent(77,25);
   h1__1->SetBinContent(78,13);
   h1__1->SetBinContent(79,5);
   h1__1->SetBinContent(80,2);
   h1__1->SetEntries(520);
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
