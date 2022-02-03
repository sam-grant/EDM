void S12_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:29 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0171,-0.004275629,3510.154,0.03075341);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1112[12] = {
   194.7748,
   428.2916,
   630.898,
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541,
   2825.967};
   Double_t Graph0_fy1112[12] = {
   0.01363175,
   0.006441061,
   0.004678785,
   0.007536418,
   0.007438521,
   0.01007363,
   0.01103865,
   0.01260317,
   0.00983348,
   0.01003375,
   0.0151457,
   0.009485019};
   Double_t Graph0_fex1112[12] = {
   0.3340551,
   0.05951737,
   0.04633076,
   0.04453331,
   0.04522431,
   0.04670874,
   0.04919543,
   0.05334962,
   0.06010925,
   0.07061149,
   0.0892903,
   0.1136539};
   Double_t Graph0_fey1112[12] = {
   0.01338456,
   0.001605079,
   0.0009230244,
   0.0008743935,
   0.0008871777,
   0.0009160711,
   0.0009652715,
   0.001047135,
   0.001180936,
   0.001392682,
   0.001771408,
   0.003051082};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1112,Graph0_fy1112,Graph0_fex1112,Graph0_fey1112);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01112 = new TH1F("Graph_Graph01112","S12_",100,0,3089.244);
   Graph_Graph01112->SetMinimum(-0.0007727251);
   Graph_Graph01112->SetMaximum(0.0272505);
   Graph_Graph01112->SetDirectory(0);
   Graph_Graph01112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01112->SetLineColor(ci);
   Graph_Graph01112->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01112->GetXaxis()->SetRange(1,101);
   Graph_Graph01112->GetXaxis()->CenterTitle(true);
   Graph_Graph01112->GetXaxis()->SetLabelFont(42);
   Graph_Graph01112->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01112->GetXaxis()->SetTitleFont(42);
   Graph_Graph01112->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01112->GetYaxis()->CenterTitle(true);
   Graph_Graph01112->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01112->GetYaxis()->SetLabelFont(42);
   Graph_Graph01112->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01112->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01112->GetYaxis()->SetTitleFont(42);
   Graph_Graph01112->GetZaxis()->SetLabelFont(42);
   Graph_Graph01112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01112);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
