void S12_AEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3119,-2.918203,3036.371,0.4641435);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[22] = {
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
   Double_t Graph0_fy1062[22] = {
   6.125888,
   0.2848163,
   0.1532496,
   0.05208803,
   0.1051027,
   0.09959722,
   0.0353781,
   0.03829399,
   0.08324785,
   0.05643815,
   0.0649391,
   0.03593634,
   0.01848202,
   0.02079396,
   0.04397951,
   0.0127399,
   0.01777167,
   0.04975642,
   -0.01445598,
   0.01992455,
   -0.02504851,
   -5.863251};
   Double_t Graph0_fex1062[22] = {
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
   Double_t Graph0_fey1062[22] = {
   2.299837,
   0.2281914,
   0.1112489,
   0.06603977,
   0.04533402,
   0.0370612,
   0.03258046,
   0.02931869,
   0.02737416,
   0.02593111,
   0.0258754,
   0.02490178,
   0.02570528,
   0.02570392,
   0.02677734,
   0.02711838,
   0.02824687,
   0.03043964,
   0.03218334,
   0.03489615,
   0.08433812,
   2.029185};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12",100,114.0569,3142.362);
   Graph_Graph01062->SetMinimum(-2.579969);
   Graph_Graph01062->SetMaximum(0.1259088);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(21,88);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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
