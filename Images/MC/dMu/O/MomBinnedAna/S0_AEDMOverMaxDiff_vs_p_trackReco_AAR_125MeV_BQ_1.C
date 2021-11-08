void S0_AEDMOverMaxDiff_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.2901948,2727,0.06577284);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1020[22] = {
   -0.2002368,
   0.000511622,
   -0.001269521,
   0.0001542563,
   -0.00127263,
   -0.0003496283,
   0.0003775478,
   0.001849475,
   0.0002582184,
   -0.0004150319,
   0.001330283,
   -0.000405772,
   0.0007382484,
   0.0001946388,
   -0.0004110772,
   -0.002582462,
   -0.001129232,
   -0.0004633949,
   -0.0003538211,
   0.003284203,
   -0.001287939,
   -0.2308669};
   Double_t Graph0_fex1020[22] = {
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
   Double_t Graph0_fey1020[22] = {
   -0.0101974,
   0.002865252,
   -0.002017697,
   0.001356018,
   -0.001123375,
   -0.0009826328,
   0.001054039,
   0.001090132,
   0.001139486,
   -0.00113109,
   0.001226346,
   -0.00130697,
   0.001388485,
   0.001429974,
   -0.001676121,
   -0.001816228,
   -0.002139788,
   -0.002430493,
   -0.002630154,
   0.003160691,
   -0.006177371,
   -0.05975652};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S0_",100,49.5,3199.5);
   Graph_Graph01020->SetMinimum(-0.254598);
   Graph_Graph01020->SetMaximum(0.03017607);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01020->GetXaxis()->SetRange(23,78);
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
