void S0S12S18_c_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:29:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.5032,-0.6516403,3019.307,0.0486649);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[12] = {
   108.5855,
   434.7742,
   631.4237,
   875.6653,
   1124.341,
   1373.527,
   1622.515,
   1871.416,
   2120.03,
   2367.802,
   2613.322,
   2835.781};
   Double_t Graph0_fy1095[12] = {
   -0.6370469,
   -2.372046,
   -0.7629092,
   -0.2909352,
   -0.1815822,
   -0.1429807,
   -0.1178924,
   -0.09101941,
   -0.07862494,
   -0.05146015,
   -0.01754235,
   -0.02628158};
   Double_t Graph0_fex1095[12] = {
   1.050334,
   0.03303288,
   0.02756052,
   0.02629005,
   0.02637793,
   0.02702382,
   0.02833287,
   0.0304105,
   0.03363327,
   0.0387081,
   0.04778142,
   0.06926315};
   Double_t Graph0_fey1095[12] = {
   0.6316099,
   0.02354749,
   0.01072436,
   0.008317462,
   0.007012173,
   0.006119539,
   0.005512759,
   0.005094136,
   0.004836484,
   0.004740059,
   0.004855838,
   0.006236444};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S0S12S18_",100,0,3108.682);
   Graph_Graph01095->SetMinimum(-0.5816098);
   Graph_Graph01095->SetMaximum(-0.02136563);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(25,89);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
