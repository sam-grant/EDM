void S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:16:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.9306,-0.5394918,3032.834,0.1435834);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1118[22] = {
   367.4445,
   456.6744,
   569.9789,
   694.4389,
   815.6606,
   938.5876,
   1062.746,
   1187.917,
   1312.682,
   1435.616,
   1562.048,
   1684.958,
   1810.531,
   1934.89,
   2060.321,
   2184.823,
   2308.917,
   2433.332,
   2560.037,
   2678.052,
   2781.147,
   2885.139};
   Double_t Graph0_fy1118[22] = {
   -2.255238,
   -0.00869707,
   0.0133725,
   -0.06893589,
   -0.05458824,
   0.0519263,
   -0.01737446,
   -0.0304481,
   0.0001297858,
   -0.004945025,
   0.006232551,
   0.01442902,
   -0.02421916,
   -0.01935304,
   -0.03391953,
   0.001556757,
   0.005832295,
   -0.05495245,
   0.06276462,
   -0.0125649,
   -0.08095444,
   -0.9786281};
   Double_t Graph0_fex1118[22] = {
   0.2553993,
   0.1283725,
   0.08555645,
   0.05917273,
   0.04836058,
   0.04376859,
   0.04168402,
   0.04033179,
   0.04122483,
   0.04165085,
   0.04471225,
   0.04754877,
   0.05370202,
   0.05912233,
   0.06807641,
   0.07513118,
   0.08716273,
   0.1058334,
   0.1243805,
   0.14237,
   0.2931026,
   1.562872};
   Double_t Graph0_fey1118[22] = {
   1.927915,
   0.1855618,
   0.09103872,
   0.05549127,
   0.03885016,
   0.03202369,
   0.02825009,
   0.02556514,
   0.02412991,
   0.02300864,
   0.02293996,
   0.02242371,
   0.02342782,
   0.02387625,
   0.02530356,
   0.02590179,
   0.02739855,
   0.02997814,
   0.03196566,
   0.03551981,
   0.09122324,
   1.539087};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1118,Graph0_fy1118,Graph0_fex1118,Graph0_fey1118);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01118 = new TH1F("Graph_Graph01118","S18",100,115.2378,3138.654);
   Graph_Graph01118->SetMinimum(-0.4711843);
   Graph_Graph01118->SetMaximum(0.07527583);
   Graph_Graph01118->SetDirectory(0);
   Graph_Graph01118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01118->SetLineColor(ci);
   Graph_Graph01118->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01118->GetXaxis()->SetRange(21,88);
   Graph_Graph01118->GetXaxis()->CenterTitle(true);
   Graph_Graph01118->GetXaxis()->SetLabelFont(42);
   Graph_Graph01118->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01118->GetXaxis()->SetTitleFont(42);
   Graph_Graph01118->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01118->GetYaxis()->CenterTitle(true);
   Graph_Graph01118->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01118->GetYaxis()->SetLabelFont(42);
   Graph_Graph01118->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01118->GetYaxis()->SetTitleFont(42);
   Graph_Graph01118->GetZaxis()->SetLabelFont(42);
   Graph_Graph01118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01118);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
