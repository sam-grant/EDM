void S12S18_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:47:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.7061,-0.03195073,3034.515,0.08608697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[22] = {
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
   Double_t Graph0_fy1041[22] = {
   -0.7708444,
   0.04957039,
   0.02330812,
   0.04364694,
   0.01480581,
   0.05163292,
   -0.005784351,
   0.01886325,
   0.006596395,
   -0.01960805,
   -0.004855417,
   -0.01704749,
   0.007761333,
   -0.000517034,
   -0.01372313,
   -0.02565806,
   0.0006953153,
   0.008235746,
   -0.004920825,
   -0.0022209,
   0.06263279,
   0.03546867};
   Double_t Graph0_fex1041[22] = {
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
   Double_t Graph0_fey1041[22] = {
   1.249238,
   0.1129011,
   0.05474842,
   0.03309185,
   0.02291772,
   0.01885029,
   0.01653474,
   0.01494438,
   0.01406991,
   0.0133422,
   0.01337317,
   0.01297595,
   0.01347565,
   0.01367497,
   0.0143754,
   0.01471987,
   0.01554826,
   0.01704321,
   0.01839581,
   0.02058482,
   0.05295412,
   0.3485312};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12S18",100,114.7555,3140.413);
   Graph_Graph01041->SetMinimum(-0.02014696);
   Graph_Graph01041->SetMaximum(0.0742832);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(21,88);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
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
