void S12S18_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(494.8944,2.059422,3023.107,30.95709);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[22] = {
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
   Double_t Graph0_fy1043[22] = {
   31.37518,
   31.27533,
   27.0026,
   23.50541,
   20.3816,
   18.71291,
   17.18756,
   16.1076,
   14.98453,
   14.02457,
   13.21549,
   12.01834,
   11.10818,
   10.11442,
   9.310216,
   8.563922,
   7.859078,
   6.829614,
   6.072278,
   5.562403,
   5.309733,
   3.750237};
   Double_t Graph0_fex1043[22] = {
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
   Double_t Graph0_fey1043[22] = {
   7.015702,
   0.6552773,
   0.3296433,
   0.1961647,
   0.1360346,
   0.1103666,
   0.09744604,
   0.08843389,
   0.08221108,
   0.07796725,
   0.07878097,
   0.07603802,
   0.07760558,
   0.07858837,
   0.08176299,
   0.08355145,
   0.08825412,
   0.0903812,
   0.0987656,
   0.1093403,
   0.2798475,
   1.875118};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12S18",100,113.7759,3132.537);
   Graph_Graph01043->SetMinimum(4.949189);
   Graph_Graph01043->SetMaximum(28.06733);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(22,88);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
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
