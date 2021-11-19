void S18_theta_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6816,-3.627224,2722.018,43.37821);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[22] = {
   367.1341,
   457.3546,
   569.9678,
   694.4654,
   815.6839,
   938.4671,
   1062.817,
   1188.128,
   1312.571,
   1435.614,
   1561.979,
   1684.895,
   1810.464,
   1934.858,
   2060.231,
   2184.73,
   2309.02,
   2433.186,
   2559.875,
   2677.734,
   2781.028,
   2884.661};
   Double_t Graph0_fy1026[22] = {
   34.86337,
   31.1539,
   26.53176,
   23.28756,
   20.30867,
   18.67896,
   17.256,
   16.06362,
   15.0534,
   14.04449,
   13.12498,
   11.98886,
   11.10534,
   10.19479,
   9.375801,
   8.576485,
   7.748778,
   6.902277,
   6.137059,
   5.427366,
   4.934249,
   4.690837};
   Double_t Graph0_fex1026[22] = {
   0.1730535,
   0.08508425,
   0.05634935,
   0.03956323,
   0.03214645,
   0.02914412,
   0.02765286,
   0.02685633,
   0.02749382,
   0.02775118,
   0.02997127,
   0.03181734,
   0.036271,
   0.03980247,
   0.0458865,
   0.05092866,
   0.05933624,
   0.07209094,
   0.08507043,
   0.09802743,
   0.2082885,
   1.078076};
   Double_t Graph0_fey1026[22] = {
   0.6805931,
   0.06181962,
   0.02987523,
   0.01841277,
   0.01289429,
   0.01065601,
   0.00939,
   0.008504791,
   0.008074585,
   0.007688982,
   0.007711171,
   0.007514097,
   0.007888169,
   0.007998334,
   0.008419534,
   0.008593422,
   0.009039268,
   0.009778833,
   0.01024107,
   0.01114762,
   0.02866231,
   0.4838229};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S18",100,115.0833,3137.616);
   Graph_Graph01026->SetMinimum(1.073319);
   Graph_Graph01026->SetMaximum(38.67766);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(22,79);
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
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
