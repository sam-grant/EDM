void S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.3865197,2727,0.1779037);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[22] = {
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
   Double_t Graph0_fy1050[22] = {
   0.07720528,
   -0.002903736,
   0.003716208,
   -0.001327454,
   0.0002576304,
   0.0004024296,
   -0.0002933865,
   0.0004495111,
   0.0003549588,
   -0.0005985557,
   5.676246e-05,
   7.163791e-05,
   -0.0007262347,
   0.002132042,
   0.0008762036,
   -0.002010678,
   -0.0002677737,
   0.00196818,
   -0.003055097,
   -0.002394145,
   0.003627117,
   -0.2924491};
   Double_t Graph0_fex1050[22] = {
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
   Double_t Graph0_fey1050[22] = {
   0.006627848,
   -0.00189714,
   0.001414662,
   -0.0009093597,
   0.0007947225,
   0.0007269012,
   -0.0007000062,
   0.0007131734,
   0.0007646251,
   -0.0007996789,
   0.000798218,
   0.0008491435,
   -0.0009947627,
   0.001053439,
   0.001046566,
   -0.001245686,
   -0.001565362,
   0.001806985,
   -0.002060155,
   -0.002023368,
   0.00518788,
   -0.08240723};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S12S18_",100,49.5,3199.5);
   Graph_Graph01050->SetMinimum(-0.3300773);
   Graph_Graph01050->SetMaximum(0.1214613);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01050->GetXaxis()->SetRange(23,78);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
