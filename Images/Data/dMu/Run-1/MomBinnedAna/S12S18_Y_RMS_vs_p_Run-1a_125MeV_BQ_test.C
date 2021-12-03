void S12S18_Y_RMS_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,9.242668,3023.107,16.11166);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[22] = {
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
   Double_t Graph0_fy1044[22] = {
   11.23962,
   13.03305,
   12.95825,
   12.85805,
   12.7481,
   12.70713,
   12.65257,
   12.69989,
   12.71682,
   12.80581,
   12.74446,
   12.72705,
   12.68435,
   12.56947,
   12.63186,
   12.57256,
   12.41013,
   12.61565,
   12.47094,
   13.01531,
   13.79765,
   36.41632};
   Double_t Graph0_fex1044[22] = {
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
   Double_t Graph0_fey1044[22] = {
   2.513255,
   0.2730669,
   0.1581922,
   0.107307,
   0.08508568,
   0.07494519,
   0.07173462,
   0.06972489,
   0.06977163,
   0.07119172,
   0.07597301,
   0.08052191,
   0.08861731,
   0.09766399,
   0.1109339,
   0.1226606,
   0.1393605,
   0.166952,
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
   Graph_Graph01044->SetMinimum(9.929567);
   Graph_Graph01044->SetMaximum(15.42476);
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
