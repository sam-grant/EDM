void S18_Ag2_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6816,-2.681668,2722.018,2.336404);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[22] = {
   367.1341,
   457.3546,
   569.9678,
   694.4654,
   815.6839,
   938.4671,
   1062.817,
   1188.128,
   1312.571,
   1435.614,
   1561.979,
   1684.895,
   1810.464,
   1934.858,
   2060.231,
   2184.73,
   2309.02,
   2433.186,
   2559.875,
   2677.734,
   2781.028,
   2884.661};
   Double_t Graph0_fy1025[22] = {
   -0.1726323,
   -0.2303395,
   0.1222254,
   0.03583524,
   -0.0323849,
   0.007491504,
   -0.0003961826,
   0.0003668152,
   -0.0158711,
   -0.06360696,
   0.005205247,
   0.01564275,
   0.01841187,
   0.01541668,
   0.05790036,
   -0.06863587,
   0.02300442,
   -0.03373811,
   0.04131843,
   -0.05178308,
   -0.02257079,
   0.216162};
   Double_t Graph0_fex1025[22] = {
   0.1730535,
   0.08508425,
   0.05634935,
   0.03956323,
   0.03214645,
   0.02914412,
   0.02765286,
   0.02685633,
   0.02749382,
   0.02775118,
   0.02997127,
   0.03181734,
   0.036271,
   0.03980247,
   0.0458865,
   0.05092866,
   0.05933624,
   0.07209094,
   0.08507043,
   0.09802743,
   0.2082885,
   1.078076};
   Double_t Graph0_fey1025[22] = {
   1.672691,
   0.1601506,
   0.07731663,
   0.04755898,
   0.0334188,
   0.02764769,
   0.02434094,
   0.02204574,
   0.02092374,
   0.01993214,
   0.01995907,
   0.0194591,
   0.02042494,
   0.02073116,
   0.02181989,
   0.02226963,
   0.02338193,
   0.02528975,
   0.02651958,
   0.02873899,
   0.0721484,
   0.2765403};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S18",100,115.0833,3137.616);
   Graph_Graph01025->SetMinimum(-2.179861);
   Graph_Graph01025->SetMaximum(1.834597);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(22,79);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
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
