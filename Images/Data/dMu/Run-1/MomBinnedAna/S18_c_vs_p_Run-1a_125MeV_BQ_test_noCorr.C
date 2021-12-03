void S18_c_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-0.3295698,3023.315,0.7442478);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2657,
   815.5224,
   938.5771,
   1061.925,
   1188.005,
   1312.76,
   1436.187,
   1562.16,
   1685.106,
   1809.264,
   1935.72,
   2061.24,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1028[22] = {
   19.18599,
   1.945338,
   -0.5629174,
   0.2996599,
   0.2516337,
   0.4106047,
   0.09852757,
   0.08433121,
   0.3975644,
   0.1727859,
   -0.1149589,
   0.2754484,
   0.1087876,
   0.03049841,
   -0.2808097,
   0.05569555,
   0.5317924,
   0.4248096,
   -0.05244049,
   -0.03649735,
   0.1709818,
   1.846688};
   Double_t Graph0_fex1028[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.5830775,
   0.4782164,
   0.4268731,
   0.4104285,
   0.3959997,
   0.3957923,
   0.4014006,
   0.4393616,
   0.4715054,
   0.5277951,
   0.5765813,
   0.6515722,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1028[22] = {
   13.24665,
   1.206565,
   0.6169562,
   0.3856438,
   0.2689523,
   0.218653,
   0.1940586,
   0.1781197,
   0.1645196,
   0.1564009,
   0.1586007,
   0.155976,
   0.1601061,
   0.161669,
   0.16797,
   0.1716595,
   0.1840221,
   0.1966247,
   0.2036785,
   0.2357598,
   0.3280294,
   11.16093};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,109.7171,3132.906);
   Graph_Graph01028->SetMinimum(-0.222188);
   Graph_Graph01028->SetMaximum(0.636866);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,88);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
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
