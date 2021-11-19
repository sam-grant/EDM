void S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(529.9807,9.714929,2721.688,22.5461);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   366.5662,
   457.0917,
   570.2421,
   694.5221,
   815.6213,
   938.4662,
   1062.727,
   1188.134,
   1312.601,
   1435.769,
   1561.946,
   1685.013,
   1810.381,
   1934.997,
   2060.333,
   2184.767,
   2309.184,
   2433.47,
   2559.803,
   2678.098,
   2781.058,
   2884.141};
   Double_t Graph0_fy1028[22] = {
   12.6631,
   14.2363,
   15.11895,
   16.14527,
   16.54464,
   17.49123,
   18.26896,
   19.00521,
   19.6258,
   20.05127,
   20.38457,
   20.09107,
   19.98698,
   19.6002,
   19.2668,
   18.69456,
   17.86096,
   16.77596,
   15.71371,
   14.51054,
   13.63562,
   14.07964};
   Double_t Graph0_fex1028[22] = {
   0.3336677,
   0.1656362,
   0.1099873,
   0.07619882,
   0.06207029,
   0.05636812,
   0.05341752,
   0.05190892,
   0.05306636,
   0.05358227,
   0.05753787,
   0.06116378,
   0.06928167,
   0.07588051,
   0.08755577,
   0.09662597,
   0.1121965,
   0.1360054,
   0.159986,
   0.1834622,
   0.3828877,
   1.295421};
   Double_t Graph0_fey1028[22] = {
   0.4725828,
   0.05479475,
   0.03314108,
   0.02463357,
   0.02027679,
   0.01928828,
   0.01922231,
   0.01943222,
   0.0203126,
   0.02114847,
   0.02300214,
   0.02419112,
   0.02711746,
   0.02933458,
   0.0329736,
   0.03556195,
   0.03948546,
   0.04474114,
   0.04937222,
   0.05568881,
   0.1455383,
   2.226187};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,114.3121,3137.356);
   Graph_Graph01028->SetMinimum(10.99805);
   Graph_Graph01028->SetMaximum(21.26298);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
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
