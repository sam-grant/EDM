void S12S18_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:15:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2707,0.8097533,3029.518,32.61594);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[22] = {
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
   Double_t Graph0_fy1175[22] = {
   35.42962,
   31.25323,
   26.61494,
   23.3526,
   20.39225,
   18.72462,
   17.281,
   16.08591,
   15.03266,
   14.04443,
   13.13838,
   11.99013,
   11.09832,
   10.16903,
   9.356176,
   8.54838,
   7.754202,
   6.938834,
   6.165751,
   5.473582,
   4.981195,
   5.524625};
   Double_t Graph0_fex1175[22] = {
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
   Double_t Graph0_fey1175[22] = {
   0.8964499,
   0.07948695,
   0.03854915,
   0.02324474,
   0.01610873,
   0.01324345,
   0.01164456,
   0.01050281,
   0.009868537,
   0.009364375,
   0.009351597,
   0.009049009,
   0.00938073,
   0.009447202,
   0.009893246,
   0.01002321,
   0.01049926,
   0.01130229,
   0.01191552,
   0.01290021,
   0.03208536,
   0.602786};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","S12S18",100,114.3931,3139.166);
   Graph_Graph01175->SetMinimum(3.990372);
   Graph_Graph01175->SetMaximum(29.43532);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01175->GetXaxis()->SetRange(22,88);
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
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
