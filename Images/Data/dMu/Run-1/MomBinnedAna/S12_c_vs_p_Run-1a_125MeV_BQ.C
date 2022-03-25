void S12_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3119,-0.4529816,3036.371,1.391474);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[22] = {
   366.7569,
   456.7845,
   570.5961,
   695.294,
   816.0224,
   938.5594,
   1062.71,
   1188.407,
   1312.759,
   1435.945,
   1561.838,
   1685.363,
   1810.678,
   1935.178,
   2060.185,
   2185.067,
   2309.271,
   2432.901,
   2559.509,
   2678.794,
   2781.468,
   2888.259};
   Double_t Graph0_fy1061[22] = {
   12.65454,
   3.367278,
   2.618328,
   0.08606346,
   0.3537172,
   0.697341,
   -0.1197599,
   -0.1637905,
   -0.3395704,
   -0.2730803,
   -0.08991265,
   0.07007085,
   0.1571369,
   0.1589718,
   0.1240829,
   0.1508775,
   0.1576495,
   0.212751,
   0.2270113,
   0.263896,
   0.4286822,
   0.5559088};
   Double_t Graph0_fex1061[22] = {
   0.3413438,
   0.1561468,
   0.1041606,
   0.07012624,
   0.05597749,
   0.05036428,
   0.04766168,
   0.04604846,
   0.04638155,
   0.04659361,
   0.04991836,
   0.05234856,
   0.05873927,
   0.06410553,
   0.07310149,
   0.08066811,
   0.09262888,
   0.1106361,
   0.132593,
   0.152446,
   0.3094867,
   1.744149};
   Double_t Graph0_fey1061[22] = {
   1.688099,
   0.1621585,
   0.07878568,
   0.04672639,
   0.03205594,
   0.02620474,
   0.02301736,
   0.02071321,
   0.01933983,
   0.01829927,
   0.01826721,
   0.01760457,
   0.01818922,
   0.01830285,
   0.019183,
   0.01953461,
   0.02058536,
   0.02253481,
   0.02418093,
   0.02692059,
   0.0690007,
   1.71486};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S12",100,114.0569,3142.362);
   Graph_Graph01061->SetMinimum(-0.268536);
   Graph_Graph01061->SetMaximum(1.207029);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(21,88);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
