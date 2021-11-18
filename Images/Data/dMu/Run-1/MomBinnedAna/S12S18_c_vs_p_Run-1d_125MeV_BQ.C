void S12S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.872,-1.377116,2726.427,1.971302);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t Graph0_fy1037[22] = {
   0.7816696,
   0.007830424,
   0.005742383,
   0.00571158,
   0.004394749,
   0.003582422,
   0.002858446,
   0.0005749442,
   -0.00126542,
   0.001026229,
   -0.001600005,
   3.62915e-05,
   0.0002929062,
   0.002533544,
   0.0001873547,
   0.0005805441,
   0.003671905,
   0.004156959,
   -0.001099602,
   -0.0001977935,
   0.01896761,
   -0.575354};
   Double_t Graph0_fex1037[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t Graph0_fey1037[22] = {
   0.6315626,
   0.05716739,
   0.02774831,
   0.01680685,
   0.01164547,
   0.009586333,
   0.008433626,
   0.007615894,
   0.007177874,
   0.006801976,
   0.006816019,
   0.006615307,
   0.00689776,
   0.00698257,
   0.007356072,
   0.007515267,
   0.007960382,
   0.00871772,
   0.009398378,
   0.01045111,
   0.02668734,
   0.2436922};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,115.2023,3138.328);
   Graph_Graph01037->SetMinimum(-1.042274);
   Graph_Graph01037->SetMaximum(1.63646);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(21,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
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
