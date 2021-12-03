void S12S18_AEDM_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,-0.2891047,3023.107,0.3657589);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
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
   Double_t Graph0_fy1040[22] = {
   -8.519343,
   0.3542882,
   -0.9542676,
   0.1799492,
   -0.06248319,
   -0.1466865,
   0.1777514,
   -0.2179481,
   0.2613085,
   -0.07421808,
   0.1869753,
   0.06760361,
   0.1190138,
   -0.2929001,
   0.07163269,
   0.2094224,
   -0.1545743,
   0.1353717,
   0.1172885,
   -0.152334,
   1.093958,
   -5.217828};
   Double_t Graph0_fex1040[22] = {
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
   Double_t Graph0_fey1040[22] = {
   260.4011,
   1.274152,
   0.6541852,
   0.3932704,
   0.2755674,
   0.220319,
   0.1939883,
   0.1764688,
   0.1642631,
   0.156315,
   0.1558243,
   0.151541,
   0.1553863,
   0.1563409,
   0.1640312,
   0.1678308,
   0.1736704,
   0.1765496,
   0.1925277,
   0.2125798,
   0.4065831,
   3.941671};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,113.7759,3132.537);
   Graph_Graph01040->SetMinimum(-0.2236183);
   Graph_Graph01040->SetMaximum(0.3002726);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(22,88);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
