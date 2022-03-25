void S18_Ag2_vs_p_Run-1b_250MeV_BQ_accCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 12:01:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(470.7315,-0.04571344,3017.857,0.05087878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[11] = {
   455.7432,
   653.8266,
   883.6284,
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264,
   2607.239,
   2781.455};
   Double_t Graph0_fy1074[11] = {
   0.007908343,
   -0.04611133,
   0.002619386,
   -0.02937749,
   0.007407838,
   0.02962781,
   -0.01901681,
   -0.01189016,
   -0.02160902,
   0.03504348,
   -0.008731945};
   Double_t Graph0_fex1074[11] = {
   0.1316061,
   0.09315749,
   0.06347119,
   0.05779539,
   0.05748647,
   0.06386167,
   0.07853738,
   0.09949788,
   0.1316717,
   0.1793381,
   0.2983409};
   Double_t Graph0_fey1074[11] = {
   0.2208129,
   0.05710595,
   0.02858495,
   0.02261047,
   0.02035948,
   0.01965777,
   0.02116173,
   0.02251888,
   0.02504128,
   0.02827783,
   0.09995184};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S18",100,222.9975,3014.367);
   Graph_Graph01074->SetMinimum(-0.03605422);
   Graph_Graph01074->SetMaximum(0.04121956);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01074->GetXaxis()->SetRange(19,91);
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
