void S12_eAEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.3942,-0.2935893,2729.756,2.867828);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[22] = {
   366.7752,
   456.7578,
   570.5921,
   695.3071,
   816.0224,
   938.5575,
   1062.711,
   1188.407,
   1312.772,
   1435.939,
   1561.834,
   1685.365,
   1810.678,
   1935.176,
   2060.183,
   2185.076,
   2309.276,
   2432.899,
   2559.529,
   2678.792,
   2781.466,
   2888.259};
   Double_t Graph0_fy1024[22] = {
   2.321993,
   0.2306895,
   0.1119897,
   0.0664487,
   0.0456463,
   0.03730438,
   0.03278967,
   0.02950956,
   0.02754387,
   0.02609803,
   0.02603242,
   0.02505823,
   0.02586516,
   0.02586303,
   0.02695388,
   0.0272916,
   0.028421,
   0.03065139,
   0.03239256,
   0.03514154,
   0.08515626,
   2.189};
   Double_t Graph0_fex1024[22] = {
   0.3450021,
   0.157226,
   0.1048064,
   0.07056723,
   0.05633048,
   0.05067462,
   0.04796335,
   0.04633051,
   0.04666407,
   0.04687252,
   0.05021785,
   0.05265346,
   0.0590909,
   0.06447877,
   0.07353012,
   0.0811364,
   0.09313613,
   0.1112972,
   0.1333412,
   0.1533601,
   0.3115684,
   1.744149};
   Double_t Graph0_fey1024[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S12",100,114.0729,3142.36);
   Graph_Graph01024->SetMinimum(0.0225524);
   Graph_Graph01024->SetMaximum(2.551686);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01024->GetXaxis()->SetRange(21,79);
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
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
