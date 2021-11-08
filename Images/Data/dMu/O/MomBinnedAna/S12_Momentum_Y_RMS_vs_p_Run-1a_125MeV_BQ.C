void S12_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 10:22:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,7.709296,2727,23.15441);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1018[22] = {
   13.05227,
   14.29627,
   15.24934,
   16.23315,
   16.65088,
   17.57835,
   18.38307,
   19.15169,
   19.76198,
   20.19208,
   20.55792,
   20.25684,
   20.13706,
   19.71086,
   19.27839,
   18.64614,
   17.94033,
   16.96864,
   15.80775,
   14.75778,
   13.66234,
   12.92096};
   Double_t Graph0_fex1018[22] = {
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
   Double_t Graph0_fey1018[22] = {
   0.5293394,
   0.05730809,
   0.03482238,
   0.02518018,
   0.02030187,
   0.0191278,
   0.01904191,
   0.01919562,
   0.01983199,
   0.02052967,
   0.02230061,
   0.0231921,
   0.02568694,
   0.02758062,
   0.0306373,
   0.03279977,
   0.03628583,
   0.04119087,
   0.04581243,
   0.0521317,
   0.1300408,
   2.63748};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,49.5,3199.5);
   Graph_Graph01018->SetMinimum(9.253807);
   Graph_Graph01018->SetMaximum(21.6099);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(23,78);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
