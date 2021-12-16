void S12_Ag2_vs_DS_blinded_750-2750MeV_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 10 11:08:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-256.9191,4.65,160.6354);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1019[4] = {
   -85.94099,
   -41.95388,
   10.0158,
   38.04938};
   Double_t _fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1019[4] = {
   101.3857,
   86.03649,
   72.50422,
   52.99358};
   TGraphErrors *gre = new TGraphErrors(4,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","S12",100,0.6,4.2);
   Graph_Graph1019->SetMinimum(-215.1636);
   Graph_Graph1019->SetMaximum(118.8799);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1019->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1019->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1019->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1019->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1019->GetXaxis()->CenterTitle(true);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph1019->GetYaxis()->CenterTitle(true);
   Graph_Graph1019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
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
