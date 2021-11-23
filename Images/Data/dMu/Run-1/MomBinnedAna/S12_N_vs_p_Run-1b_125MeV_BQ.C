void S12_N_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7114,-113760.6,2730.075,1024088);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[22] = {
   367.0103,
   456.7431,
   570.2428,
   695.0448,
   815.9725,
   938.712,
   1062.736,
   1188.27,
   1312.737,
   1435.93,
   1561.978,
   1685.239,
   1810.655,
   1935.234,
   2060.302,
   2185.134,
   2309.222,
   2432.985,
   2559.505,
   2679.171,
   2780.718,
   2888.448};
   Double_t Graph0_fy1023[22] = {
   522,
   52861,
   158931,
   346053,
   559988,
   704010,
   773607,
   827551,
   826877,
   808084,
   712035,
   638946,
   515613,
   426887,
   332883,
   272023,
   206434,
   142232,
   99560,
   67357,
   9421,
   27};
   Double_t Graph0_fex1023[22] = {
   0.2630727,
   0.1312423,
   0.08883135,
   0.05990632,
   0.04792126,
   0.04303468,
   0.04088577,
   0.03943381,
   0.03980589,
   0.03995167,
   0.042785,
   0.04490781,
   0.05025173,
   0.05495971,
   0.06262148,
   0.06895527,
   0.07940075,
   0.09524145,
   0.1140435,
   0.1306775,
   0.2611948,
   1.874823};
   Double_t Graph0_fey1023[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S12",100,114.3897,3142.68);
   Graph_Graph01023->SetMinimum(24.3);
   Graph_Graph01023->SetMaximum(910303.4);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01023->GetXaxis()->SetRange(21,79);
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
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
