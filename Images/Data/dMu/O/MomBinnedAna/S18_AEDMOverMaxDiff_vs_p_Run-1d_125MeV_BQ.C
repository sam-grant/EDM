void S18_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6816,-0.03940905,2722.018,0.01097105);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
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
   Double_t Graph0_fy1032[22] = {
   -0.009538573,
   -0.0002134065,
   -0.000330286,
   0.0001005966,
   -8.778183e-05,
   -0.00019596,
   3.242e-05,
   -4.770201e-05,
   0.0001175213,
   0.0001351951,
   8.663637e-05,
   -8.565186e-05,
   -0.0002091807,
   -0.0003719638,
   -8.161633e-05,
   -2.961896e-06,
   -0.0009777071,
   -0.0004252942,
   -0.0007422779,
   0.0008356455,
   0.0006148159,
   -0.03101237};
   Double_t Graph0_fex1032[22] = {
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
   Double_t Graph0_fey1032[22] = {
   -0.009629743,
   -0.0005423824,
   -0.0002793873,
   0.0002041945,
   -0.0001428214,
   -0.0001250467,
   0.0001192946,
   -0.0001168925,
   0.0001154322,
   0.0001110613,
   0.0001327622,
   -0.000141882,
   -0.0001530468,
   -0.0002174514,
   -0.0002378594,
   -0.0002712847,
   -0.0003745271,
   -0.0004017185,
   -0.0004493064,
   0.0005849956,
   0.001959553,
   -0.01996664};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,115.0833,3137.616);
   Graph_Graph01032->SetMinimum(-0.03437104);
   Graph_Graph01032->SetMaximum(0.005933043);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(22,79);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
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
