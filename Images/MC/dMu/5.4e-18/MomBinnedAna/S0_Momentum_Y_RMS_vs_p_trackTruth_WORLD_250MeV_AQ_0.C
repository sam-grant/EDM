void S0_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.4803,8.547215,3019.167,29.26393);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[12] = {
   110.6597,
   435.4286,
   631.2771,
   875.7051,
   1124.338,
   1373.621,
   1622.584,
   1871.441,
   2120.162,
   2367.805,
   2613.446,
   2835.716};
   Double_t Graph0_fy1043[12] = {
   5.903874,
   14.49419,
   17.33795,
   19.91067,
   21.52808,
   22.36657,
   22.6633,
   22.33938,
   21.42054,
   19.81316,
   17.16483,
   13.34719};
   Double_t Graph0_fex1043[12] = {
   1.868335,
   0.05657491,
   0.04748874,
   0.04527471,
   0.04539018,
   0.04646817,
   0.04873927,
   0.05227883,
   0.057723,
   0.06629923,
   0.08136716,
   0.1175497};
   Double_t Graph0_fey1043[12] = {
   0.1031176,
   0.01246976,
   0.008202014,
   0.008846402,
   0.009580218,
   0.01019603,
   0.01083114,
   0.01146257,
   0.01214926,
   0.01293183,
   0.01388254,
   0.01784508};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S0_",100,0,3108.538);
   Graph_Graph01043->SetMinimum(10.61889);
   Graph_Graph01043->SetMaximum(27.19226);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(25,89);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
