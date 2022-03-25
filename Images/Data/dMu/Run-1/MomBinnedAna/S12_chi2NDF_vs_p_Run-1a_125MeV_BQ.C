void S12_chi2NDF_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3119,0.2371875,3036.371,1.991661);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[22] = {
   366.7569,
   456.7845,
   570.5961,
   695.294,
   816.0224,
   938.5594,
   1062.71,
   1188.407,
   1312.759,
   1435.945,
   1561.838,
   1685.363,
   1810.678,
   1935.178,
   2060.185,
   2185.067,
   2309.271,
   2432.901,
   2559.509,
   2678.794,
   2781.468,
   2888.259};
   Double_t Graph0_fy1064[22] = {
   1.357412,
   0.6394631,
   0.5504515,
   0.8078549,
   0.8111569,
   0.8583202,
   0.9479412,
   1.224349,
   1.503056,
   1.158675,
   1.109368,
   1.395558,
   1.177267,
   0.8932934,
   0.5152343,
   0.8679002,
   0.7084683,
   1.532859,
   0.8240895,
   0.8154374,
   0.9488383,
   inf};
   Double_t Graph0_fex1064[22] = {
   0.3413438,
   0.1561468,
   0.1041606,
   0.07012624,
   0.05597749,
   0.05036428,
   0.04766168,
   0.04604846,
   0.04638155,
   0.04659361,
   0.04991836,
   0.05234856,
   0.05873927,
   0.06410553,
   0.07310149,
   0.08066811,
   0.09262888,
   0.1106361,
   0.132593,
   0.152446,
   0.3094867,
   1.744149};
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
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S12",100,114.0569,3142.362);
   Graph_Graph01064->SetMinimum(0.4126349);
   Graph_Graph01064->SetMaximum(1.816214);
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
