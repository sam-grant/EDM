void S0S12S18_Ag2_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.5032,-0.04003254,3019.307,0.02323237);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[12] = {
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
   Double_t Graph0_fy1097[12] = {
   1.720695,
   -0.00756461,
   -0.04433822,
   -0.01533817,
   -0.008423902,
   0.01440668,
   0.002157761,
   0.006129501,
   0.004474027,
   0.009113784,
   0.002358432,
   0.003040363};
   Double_t Graph0_fex1097[12] = {
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
   Double_t Graph0_fey1097[12] = {
   0.8976993,
   0.03329964,
   0.01517823,
   0.0117685,
   0.009923013,
   0.008658861,
   0.007802425,
   0.007205099,
   0.006839951,
   0.006707412,
   0.006867603,
   0.00881959};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S0S12S18_",100,0,3108.682);
   Graph_Graph01097->SetMinimum(-0.03370605);
   Graph_Graph01097->SetMaximum(0.01690588);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(25,89);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
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
