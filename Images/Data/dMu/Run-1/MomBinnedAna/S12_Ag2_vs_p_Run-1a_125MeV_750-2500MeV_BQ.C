void S12_Ag2_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3259,-0.05218382,3036.37,0.06724188);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
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
   Double_t Graph0_fy1019[22] = {
   -1.436997,
   0.4044233,
   0.06317548,
   0.04818223,
   -0.005822686,
   0.03290964,
   -0.006190535,
   -0.0007800914,
   0.03240485,
   0.00715618,
   0.02740296,
   -0.03275481,
   -0.05039699,
   -0.01365198,
   0.001485113,
   -0.02441975,
   -0.02526568,
   -0.03361349,
   0.03978813,
   -0.0004848315,
   -0.02338693,
   -2.452649};
   Double_t Graph0_fex1019[22] = {
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
   Double_t Graph0_fey1019[22] = {
   2.466338,
   0.2312831,
   0.1119002,
   0.06634943,
   0.04550211,
   0.0372312,
   0.03269441,
   0.029437,
   0.02748825,
   0.02598662,
   0.02593212,
   0.0249878,
   0.02578414,
   0.02602827,
   0.02728114,
   0.0276756,
   0.02928817,
   0.0320223,
   0.03440768,
   0.03830999,
   0.09932135,
   2.634816};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,114.0729,3142.36);
   Graph_Graph01019->SetMinimum(-0.04024125);
   Graph_Graph01019->SetMaximum(0.05529931);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(21,88);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
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
