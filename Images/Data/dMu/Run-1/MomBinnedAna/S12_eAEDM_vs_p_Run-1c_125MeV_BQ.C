void S12_eAEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,0.01149127,2731.307,0.05474245);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[22] = {
   367.0259,
   456.9861,
   570.3033,
   695.1491,
   816.0438,
   938.5662,
   1062.777,
   1188.406,
   1312.66,
   1436.011,
   1561.94,
   1685.36,
   1810.626,
   1935.175,
   2060.29,
   2185.097,
   2309.115,
   2432.874,
   2559.589,
   2678.766,
   2780.784,
   2890.136};
   Double_t Graph0_fy1025[22] = {
   1.716458,
   0.1600769,
   0.077834,
   0.04642022,
   0.03180889,
   0.02599621,
   0.02277359,
   0.02059333,
   0.01930285,
   0.01820311,
   0.01821177,
   0.01755411,
   0.01808487,
   0.01818057,
   0.01892071,
   0.01923144,
   0.02005767,
   0.0216188,
   0.02308596,
   0.02506135,
   0.06119617,
   0.5201456};
   Double_t Graph0_fex1025[22] = {
   0.22722,
   0.1087091,
   0.07270613,
   0.04936012,
   0.03923618,
   0.03530122,
   0.03342569,
   0.03237394,
   0.03268045,
   0.03278089,
   0.03521736,
   0.03693347,
   0.04144578,
   0.04526516,
   0.05166049,
   0.0571106,
   0.06562328,
   0.0787792,
   0.09490435,
   0.1086824,
   0.2160954,
   1.498282};
   Double_t Graph0_fey1025[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S12",100,114.3151,3144.118);
   Graph_Graph01025->SetMinimum(0.01581639);
   Graph_Graph01025->SetMaximum(0.05041733);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(21,79);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
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
