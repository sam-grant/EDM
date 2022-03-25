void S12_chi2NDF_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6562,-1.712879,3036.689,19.22473);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[22] = {
   367.0228,
   456.7253,
   570.2426,
   695.0361,
   815.9691,
   938.7137,
   1062.74,
   1188.278,
   1312.735,
   1435.934,
   1561.977,
   1685.242,
   1810.658,
   1935.243,
   2060.306,
   2185.137,
   2309.23,
   2433,
   2559.494,
   2679.163,
   2780.754,
   2888.448};
   Double_t Graph0_fy1064[22] = {
   1.799947,
   0.6491781,
   0.9995676,
   0.7990626,
   0.58832,
   0.7060829,
   1.542048,
   1.114565,
   1.1507,
   0.8804816,
   1.567939,
   0.9482412,
   0.7708915,
   0.8449855,
   0.4751991,
   0.6895693,
   1.252328,
   0.8960937,
   1.062412,
   0.702779,
   1.033395,
   25.1047};
   Double_t Graph0_fex1064[22] = {
   0.2618944,
   0.1304244,
   0.08828179,
   0.05953292,
   0.04761139,
   0.04276526,
   0.04063653,
   0.03918935,
   0.03956692,
   0.03971624,
   0.04252848,
   0.04463818,
   0.04995398,
   0.0546307,
   0.06224063,
   0.06855283,
   0.07897087,
   0.09467415,
   0.1133242,
   0.1298863,
   0.2598874,
   1.874823};
   Double_t Graph0_fey1064[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12",100,114.4047,3142.679);
   Graph_Graph01064->SetMinimum(0.3808825);
   Graph_Graph01064->SetMaximum(17.13097);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(21,88);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
