void S12S18_c_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,-0.05007065,3023.107,0.4116755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   367.1739,
   456.5895,
   570.4502,
   695.5266,
   815.6818,
   938.7102,
   1062.099,
   1188.257,
   1312.882,
   1435.895,
   1561.693,
   1685.399,
   1809.923,
   1935.392,
   2060.949,
   2185.315,
   2308.884,
   2432.874,
   2559.022,
   2678.209,
   2780.775,
   2879.577};
   Double_t Graph0_fy1039[22] = {
   -7.938873,
   2.498291,
   -0.3725142,
   0.3095016,
   0.1774181,
   0.04416089,
   0.1183619,
   0.07830978,
   0.1790769,
   0.2528987,
   0.01713879,
   0.1948627,
   0.1282146,
   0.04135556,
   0.09000241,
   0.1489478,
   0.1143627,
   -0.007699508,
   0.1167876,
   0.01667775,
   0.7603411,
   1.846688};
   Double_t Graph0_fex1039[22] = {
   1.834592,
   0.8890785,
   0.6206881,
   0.4163346,
   0.338383,
   0.3019082,
   0.2876941,
   0.2762181,
   0.2808951,
   0.2821379,
   0.3041337,
   0.3245477,
   0.3592058,
   0.3959237,
   0.4420454,
   0.4966082,
   0.5708508,
   0.6793518,
   0.8257381,
   0.9505763,
   1.954565,
   1.395883};
   Double_t Graph0_fey1039[22] = {
   242.6585,
   0.9085364,
   0.4644902,
   0.2771219,
   0.1921519,
   0.155603,
   0.1375728,
   0.1248137,
   0.1161135,
   0.110036,
   0.1110729,
   0.1074974,
   0.1098743,
   0.1110323,
   0.1162456,
   0.1196753,
   0.1271767,
   0.1314319,
   0.1433754,
   0.1606698,
   0.2775588,
   11.16093};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,113.7759,3132.537);
   Graph_Graph01039->SetMinimum(-0.003896033);
   Graph_Graph01039->SetMaximum(0.3655009);
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
