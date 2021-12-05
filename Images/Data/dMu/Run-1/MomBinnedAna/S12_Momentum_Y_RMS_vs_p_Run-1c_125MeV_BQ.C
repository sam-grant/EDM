void S12_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:47:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5837,9.055665,3003.847,26.37111);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[22] = {
   367.0912,
   456.9775,
   570.3352,
   695.1607,
   816.036,
   938.5588,
   1062.792,
   1188.402,
   1312.659,
   1436.008,
   1561.944,
   1685.355,
   1810.634,
   1935.163,
   2060.286,
   2185.107,
   2309.111,
   2432.867,
   2559.582,
   2678.741,
   2780.764,
   2889.945};
   Double_t Graph0_fy1023[22] = {
   13.14726,
   14.29656,
   15.22942,
   16.20196,
   16.62911,
   17.58024,
   18.33679,
   19.11084,
   19.75514,
   20.13378,
   20.53923,
   20.24433,
   20.07665,
   19.68294,
   19.23941,
   18.66012,
   17.90652,
   16.91772,
   15.77637,
   14.69343,
   13.83047,
   13.19189};
   Double_t Graph0_fex1023[22] = {
   0.2307802,
   0.1107898,
   0.07402972,
   0.05028522,
   0.03996554,
   0.0359552,
   0.03405148,
   0.0329787,
   0.03328915,
   0.03339202,
   0.03587261,
   0.03762182,
   0.04222444,
   0.04610221,
   0.05261229,
   0.05817227,
   0.06684824,
   0.08026796,
   0.09667362,
   0.1106825,
   0.2199447,
   1.555816};
   Double_t Graph0_fey1023[22] = {
   0.3410561,
   0.03713479,
   0.02253731,
   0.01631264,
   0.0131411,
   0.0123765,
   0.01227971,
   0.01241157,
   0.01284947,
   0.01325487,
   0.01443298,
   0.01501867,
   0.0166129,
   0.01787029,
   0.01982389,
   0.02133791,
   0.02351688,
   0.02672129,
   0.02995415,
   0.033984,
   0.08659281,
   1.456801};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S12",100,114.3965,3143.964);
   Graph_Graph01023->SetMinimum(10.78721);
   Graph_Graph01023->SetMaximum(24.63956);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01023->GetXaxis()->SetRange(21,87);
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
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
