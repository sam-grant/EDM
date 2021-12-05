void S18_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:46:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9306,8.718762,3032.834,21.88915);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[22] = {
   367.4445,
   456.6744,
   569.9789,
   694.4389,
   815.6606,
   938.5876,
   1062.746,
   1187.917,
   1312.682,
   1435.616,
   1562.048,
   1684.958,
   1810.531,
   1934.89,
   2060.321,
   2184.823,
   2308.917,
   2433.332,
   2560.037,
   2678.052,
   2781.147,
   2885.139};
   Double_t Graph0_fy1033[22] = {
   14.19182,
   13.63029,
   13.04777,
   12.8113,
   12.79317,
   12.77929,
   12.72774,
   12.73593,
   12.70281,
   12.72874,
   12.7257,
   12.73265,
   12.71469,
   12.6252,
   12.63846,
   12.56912,
   12.54485,
   12.54475,
   12.66581,
   12.83076,
   13.4734,
   19.95827};
   Double_t Graph0_fex1033[22] = {
   0.2553993,
   0.1283725,
   0.08555645,
   0.05917273,
   0.04836058,
   0.04376859,
   0.04168402,
   0.04033179,
   0.04122483,
   0.04165085,
   0.04471225,
   0.04754877,
   0.05370202,
   0.05912233,
   0.06807641,
   0.07513118,
   0.08716273,
   0.1058334,
   0.1243805,
   0.14237,
   0.2931026,
   1.562872};
   Double_t Graph0_fey1033[22] = {
   0.4120936,
   0.04058287,
   0.02220776,
   0.0151762,
   0.01219395,
   0.01095428,
   0.01042448,
   0.01012906,
   0.01021688,
   0.0104537,
   0.01115618,
   0.01190286,
   0.01339258,
   0.01471105,
   0.01682397,
   0.01855168,
   0.0215045,
   0.02607487,
   0.03086433,
   0.0382849,
   0.1111797,
   2.822526};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S18",100,115.2378,3138.654);
   Graph_Graph01033->SetMinimum(10.0358);
   Graph_Graph01033->SetMaximum(20.57211);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(21,88);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
   gre->Draw("alp");
   
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
