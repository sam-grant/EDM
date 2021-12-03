void S12_c_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3259,-0.5655603,3036.37,0.6870608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
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
   Double_t Graph0_fy1017[22] = {
   12.19283,
   3.137251,
   2.40216,
   -0.137865,
   0.1398199,
   0.4776529,
   -0.3389081,
   -0.381051,
   -0.5539763,
   -0.492573,
   -0.308625,
   -0.1502987,
   -0.06504768,
   -0.05929132,
   -0.09029606,
   -0.06791342,
   -0.06212883,
   -0.008216963,
   0.008361551,
   0.04269272,
   0.2020732,
   0.2894697};
   Double_t Graph0_fex1017[22] = {
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
   Double_t Graph0_fey1017[22] = {
   1.695333,
   0.163234,
   0.07924231,
   0.0470112,
   0.03226281,
   0.0263721,
   0.02316132,
   0.02084283,
   0.0194554,
   0.01841373,
   0.01837457,
   0.01770779,
   0.01829637,
   0.01841029,
   0.01930085,
   0.01964452,
   0.02070024,
   0.022664,
   0.02431771,
   0.02706336,
   0.0695114,
   1.692537};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.0729,3142.36);
   Graph_Graph01017->SetMinimum(-0.4402982);
   Graph_Graph01017->SetMaximum(0.5617987);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,88);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
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
