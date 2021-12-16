void S12S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:15:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2707,-0.187221,3029.518,0.02821265);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[22] = {
   366.6885,
   456.94,
   570.4296,
   694.9006,
   815.8333,
   938.5324,
   1062.751,
   1188.29,
   1312.702,
   1435.864,
   1561.907,
   1685.205,
   1810.549,
   1935.124,
   2060.256,
   2184.912,
   2309.216,
   2433.15,
   2559.65,
   2678.438,
   2781.416,
   2886.078};
   Double_t Graph0_fy1181[22] = {
   0.1385236,
   0.00204451,
   0.002713129,
   0.002451904,
   0.003568765,
   0.003624582,
   0.00314189,
   0.001682804,
   0.003724023,
   0.0008574413,
   0.003083143,
   0.002452629,
   0.001615077,
   0.0004317347,
   0.005431932,
   0.002917749,
   0.001277085,
   0.005598673,
   0.0003390666,
   0.0006217028,
   0.005626555,
   -0.3744097};
   Double_t Graph0_fex1181[22] = {
   0.2309951,
   0.1093191,
   0.07258434,
   0.04967013,
   0.04000918,
   0.03615285,
   0.0342411,
   0.033146,
   0.03361641,
   0.03385663,
   0.03629752,
   0.03830532,
   0.04317216,
   0.04718171,
   0.05405557,
   0.0596571,
   0.06883895,
   0.08280096,
   0.09835486,
   0.1130508,
   0.2337414,
   1.023868};
   Double_t Graph0_fey1181[22] = {
   0.04861998,
   0.005078485,
   0.002903359,
   0.001995241,
   0.001583787,
   0.001416574,
   0.001350451,
   0.001307741,
   0.001315267,
   0.001336283,
   0.001425709,
   0.001512641,
   0.001695058,
   0.001859527,
   0.002118731,
   0.002348308,
   0.002711406,
   0.003261023,
   0.00385907,
   0.00470108,
   0.0127663,
   -0.0936551};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18",100,114.3931,3139.166);
   Graph_Graph01181->SetMinimum(-0.1656776);
   Graph_Graph01181->SetMaximum(0.006669289);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(22,88);
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
