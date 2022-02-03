void S12_Ag2_vs_DS_blinded_750-2750MeV_125MeV_BQ_noBr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 17 13:09:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-256.919,4.65,160.6354);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1001[4] = {
   -85.94089,
   -41.95385,
   10.01571,
   38.0494};
   Double_t _fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1001[4] = {
   101.3857,
   86.03649,
   72.50422,
   52.99358};
   TGraphErrors *gre = new TGraphErrors(4,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","S12",100,0.6,4.2);
   Graph_Graph1001->SetMinimum(-215.1635);
   Graph_Graph1001->SetMaximum(118.8799);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1001->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
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
