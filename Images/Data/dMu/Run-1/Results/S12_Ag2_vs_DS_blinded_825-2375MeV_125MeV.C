void S12_Ag2_vs_DS_blinded_825-2375MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-249.5958,4.75,215.9246);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1001[4] = {
   -67.2857,
   -11.15028,
   9.618678,
   84.78915};
   Double_t _fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1001[4] = {
   104.7234,
   89.01298,
   73.35119,
   53.54869};
   TGraphErrors *gre = new TGraphErrors(4,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","S12",100,0.7,4.3);
   Graph_Graph1001->SetMinimum(-203.0437);
   Graph_Graph1001->SetMaximum(169.3725);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(92,"Run-1d");
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
