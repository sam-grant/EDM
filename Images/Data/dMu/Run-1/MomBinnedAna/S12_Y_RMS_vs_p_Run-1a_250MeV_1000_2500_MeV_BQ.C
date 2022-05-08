void S12_Y_RMS_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.907,9.401739,2704.116,15.92342);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[11] = {
   455.8948,
   656.0632,
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574,
   2781.732};
   Double_t Graph0_fy1044[11] = {
   13.59869,
   12.82113,
   12.72827,
   12.69365,
   12.66555,
   12.66219,
   12.65289,
   12.59713,
   12.56738,
   12.66186,
   13.35943};
   Double_t Graph0_fex1044[11] = {
   0.1612216,
   0.1117597,
   0.07355508,
   0.06671218,
   0.06510647,
   0.07171005,
   0.08614684,
   0.1078021,
   0.1395437,
   0.1943605,
   0.3152937};
   Double_t Graph0_fey1044[11] = {
   0.04924023,
   0.01494089,
   0.009362534,
   0.008275566,
   0.008172356,
   0.008992769,
   0.0107487,
   0.01336489,
   0.01755306,
   0.02548581,
   0.1138965};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12",100,223.1022,3014.678);
   Graph_Graph01044->SetMinimum(10.05391);
   Graph_Graph01044->SetMaximum(15.27125);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(28,82);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
