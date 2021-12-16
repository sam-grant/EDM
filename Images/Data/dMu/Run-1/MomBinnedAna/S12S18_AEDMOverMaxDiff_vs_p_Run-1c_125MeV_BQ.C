void S12S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.7061,-0.07197311,3034.515,0.02398155);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[22] = {
   367.051,
   457.0974,
   570.1811,
   694.8088,
   815.8621,
   938.5384,
   1062.838,
   1188.304,
   1312.633,
   1435.871,
   1561.971,
   1685.2,
   1810.579,
   1935.045,
   2060.276,
   2184.955,
   2309.048,
   2433.116,
   2559.624,
   2678.406,
   2781.157,
   2887.23};
   Double_t Graph0_fy1181[22] = {
   0.004179455,
   0.004910267,
   0.002366483,
   0.003206733,
   0.001340243,
   0.002567575,
   0.002769406,
   0.003922877,
   0.002598254,
   0.003484156,
   0.003240956,
   0.004655873,
   0.003839347,
   0.006292765,
   0.00610999,
   0.002708492,
   0.007666454,
   0.0005450107,
   0.01200954,
   0.005336695,
   0.005230498,
   -0.1447532};
   Double_t Graph0_fex1181[22] = {
   0.157396,
   0.07733575,
   0.05143223,
   0.03551066,
   0.02849384,
   0.02573646,
   0.02436904,
   0.02364648,
   0.02402267,
   0.02416336,
   0.02602274,
   0.0274188,
   0.03095359,
   0.0338914,
   0.0388552,
   0.04300123,
   0.04965168,
   0.05984093,
   0.07146685,
   0.08238563,
   0.1688844,
   1.045133};
   Double_t Graph0_fey1181[22] = {
   0.034181,
   0.003624835,
   0.002059823,
   0.00142374,
   0.0011295,
   0.001009979,
   0.0009614024,
   0.0009333513,
   0.0009401393,
   0.0009548284,
   0.001021161,
   0.001083121,
   0.001215868,
   0.001336114,
   0.001521141,
   0.001694243,
   0.001954553,
   0.002354929,
   0.002811813,
   0.00344696,
   0.009462498,
   -0.08840881};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18",100,114.7555,3140.413);
   Graph_Graph01181->SetMinimum(-0.06237765);
   Graph_Graph01181->SetMaximum(0.01438608);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(21,88);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
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
