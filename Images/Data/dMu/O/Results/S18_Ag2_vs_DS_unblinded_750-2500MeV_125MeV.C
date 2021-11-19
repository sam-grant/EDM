void S18_Ag2_vs_DS_unblinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 12:00:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-271.7013,4.75,409.4447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1020[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1020[4] = {
   143.8402,
   90.54052,
   -50.42159,
   -44.89164};
   Double_t _fex1020[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1020[4] = {
   152.0802,
   130.5084,
   107.7554,
   79.50272};
   TGraphErrors *gre = new TGraphErrors(4,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","S18",100,0.7,4.3);
   Graph_Graph1020->SetMinimum(-203.5867);
   Graph_Graph1020->SetMaximum(341.3301);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1020->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1020->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1020->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph1020->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1020->GetXaxis()->CenterTitle(true);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
   Graph_Graph1020->GetYaxis()->CenterTitle(true);
   Graph_Graph1020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
