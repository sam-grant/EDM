void S12_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8389,-0.4149558,3033.522,0.9489449);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[22] = {
   367.2236,
   456.6639,
   570.2517,
   695.0627,
   815.9831,
   938.554,
   1062.655,
   1188.287,
   1312.788,
   1435.9,
   1561.968,
   1685.267,
   1810.602,
   1935.128,
   2060.285,
   2185.022,
   2309.141,
   2432.952,
   2559.541,
   2679.196,
   2781.12,
   2886.415};
   Double_t Graph0_fy1061[22] = {
   8.685231,
   2.599834,
   2.089476,
   -0.2082529,
   0.1016489,
   0.478776,
   -0.2454863,
   -0.2330805,
   -0.3508441,
   -0.2432581,
   -0.01318438,
   0.1638585,
   0.2240529,
   0.3037656,
   0.2701619,
   0.3406358,
   0.3507678,
   0.3810868,
   0.4893744,
   0.6008911,
   0.6779757,
   0.1565706};
   Double_t Graph0_fex1061[22] = {
   0.15529,
   0.07767284,
   0.05215712,
   0.03528341,
   0.02828885,
   0.02549312,
   0.02417555,
   0.02334841,
   0.02364677,
   0.02371021,
   0.02546434,
   0.02672193,
   0.02997394,
   0.03283023,
   0.03742638,
   0.0412261,
   0.04755622,
   0.05709664,
   0.06850077,
   0.07809568,
   0.1560077,
   0.9305664};
   Double_t Graph0_fey1061[22] = {
   0.8897347,
   0.08060018,
   0.03942882,
   0.02352516,
   0.016157,
   0.01326084,
   0.01166864,
   0.01052299,
   0.009859308,
   0.009305726,
   0.009315498,
   0.008997947,
   0.009319254,
   0.009399421,
   0.009864488,
   0.01003082,
   0.01060325,
   0.01156784,
   0.01258055,
   0.01387114,
   0.03430684,
   0.2609516};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S12",100,115.0406,3139.374);
   Graph_Graph01061->SetMinimum(-0.2785657);
   Graph_Graph01061->SetMaximum(0.8125548);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(21,88);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
