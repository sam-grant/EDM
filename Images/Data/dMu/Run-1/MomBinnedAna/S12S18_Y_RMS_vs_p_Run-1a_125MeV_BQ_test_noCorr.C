void S12S18_Y_RMS_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,9.245157,3023.107,16.10166);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[22] = {
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
   Double_t Graph0_fy1044[22] = {
   11.23962,
   13.03305,
   12.96179,
   12.85046,
   12.74894,
   12.70744,
   12.6494,
   12.70095,
   12.71869,
   12.80641,
   12.74371,
   12.72511,
   12.68549,
   12.57011,
   12.62929,
   12.56779,
   12.41169,
   12.61414,
   12.47094,
   13.01531,
   13.79765,
   36.41632};
   Double_t Graph0_fex1044[22] = {
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
   Double_t Graph0_fey1044[22] = {
   2.513255,
   0.2730669,
   0.1582118,
   0.1072586,
   0.08510648,
   0.07495222,
   0.07174201,
   0.06972863,
   0.06977764,
   0.07119289,
   0.07596855,
   0.08050001,
   0.08863392,
   0.09767484,
   0.110937,
   0.1226257,
   0.1393956,
   0.1669028,
   0.2028398,
   0.2558423,
   0.7272,
   18.20816};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12S18",100,113.7759,3132.537);
   Graph_Graph01044->SetMinimum(9.930808);
   Graph_Graph01044->SetMaximum(15.41601);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(22,88);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
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
