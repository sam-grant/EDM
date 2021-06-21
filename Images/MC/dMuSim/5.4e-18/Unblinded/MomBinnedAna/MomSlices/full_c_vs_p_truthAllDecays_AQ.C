void full_c_vs_p_truthAllDecays_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 10:53:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.1198501,3456.75,0.1711433);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1049[15] = {
   0.07392333,
   -0.03571527,
   0.03446381,
   0.0347857,
   -0.008313536,
   -0.02716376,
   -0.01975088,
   -0.002092453,
   -0.003515657,
   -0.02588078,
   0.003216654,
   0.04808552,
   -0.02039302,
   0.03735295,
   0.001602748};
   Double_t Graph0_fex1049[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1049[15] = {
   0.04872104,
   0.03563594,
   0.03073653,
   0.02775151,
   0.02550872,
   0.02388635,
   0.02276111,
   0.02204391,
   0.02171164,
   0.02175974,
   0.02221012,
   0.023263,
   0.02513682,
   0.02877751,
   0.03760164};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","",100,0,3300);
   Graph_Graph01049->SetMinimum(-0.09075076);
   Graph_Graph01049->SetMaximum(0.1420439);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01049->GetXaxis()->SetRange(0,93);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
