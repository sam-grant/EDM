void S12S18_c_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,-0.03774529,3023.107,0.4102842);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
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
   Double_t Graph0_fy1039[22] = {
   -0.5906715,
   2.537517,
   -0.4460924,
   0.3091351,
   0.186111,
   0.02877772,
   0.1195927,
   0.07905325,
   0.1698443,
   0.2482543,
   0.01268531,
   0.1936839,
   0.1247704,
   0.03590678,
   0.09488656,
   0.1507317,
   0.1097902,
   0.006415738,
   0.1381049,
   0.04739235,
   1.605958,
   1.853335};
   Double_t Graph0_fex1039[22] = {
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
   Double_t Graph0_fey1039[22] = {
   12.19611,
   0.9056574,
   0.463722,
   0.2773601,
   0.1921364,
   0.1556141,
   0.1376346,
   0.1248468,
   0.1159587,
   0.1100479,
   0.1111178,
   0.1075133,
   0.109775,
   0.111021,
   0.1162335,
   0.1197336,
   0.1275708,
   0.1312858,
   0.1428554,
   0.1608851,
   0.2535453,
   11.15886};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,113.7759,3132.537);
   Graph_Graph01039->SetMinimum(0.007057661);
   Graph_Graph01039->SetMaximum(0.3654812);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(22,88);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
