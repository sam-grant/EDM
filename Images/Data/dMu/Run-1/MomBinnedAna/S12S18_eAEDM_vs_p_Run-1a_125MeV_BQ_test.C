void S12S18_eAEDM_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,0.07838435,3023.107,0.5091078);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[22] = {
   367.1739,
   456.5895,
   570.4566,
   695.5395,
   815.6842,
   938.714,
   1062.105,
   1188.263,
   1312.898,
   1435.895,
   1561.684,
   1685.41,
   1809.924,
   1935.374,
   2060.944,
   2185.313,
   2308.898,
   2432.886,
   2559.022,
   2678.209,
   2780.775,
   2879.577};
   Double_t Graph0_fy1047[22] = {
   15.02301,
   1.261581,
   0.6535454,
   0.39273,
   0.2750997,
   0.2204254,
   0.1939977,
   0.1765475,
   0.1641019,
   0.1564908,
   0.155776,
   0.1516763,
   0.1555972,
   0.1562369,
   0.1638662,
   0.1675077,
   0.174351,
   0.1764084,
   0.1920492,
   0.2129874,
   0.3625542,
   4.127412};
   Double_t Graph0_fex1047[22] = {
   1.834592,
   0.8890785,
   0.6208397,
   0.4161625,
   0.338288,
   0.3018899,
   0.2876432,
   0.2762431,
   0.2808862,
   0.2821316,
   0.3041433,
   0.3245874,
   0.3591914,
   0.3958381,
   0.4420178,
   0.4965194,
   0.5708913,
   0.6794835,
   0.8257381,
   0.9505763,
   1.954565,
   1.395883};
   Double_t Graph0_fey1047[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","S12S18",100,113.7759,3132.537);
   Graph_Graph01047->SetMinimum(0.1214567);
   Graph_Graph01047->SetMaximum(0.4660354);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01047->GetXaxis()->SetRange(22,88);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
