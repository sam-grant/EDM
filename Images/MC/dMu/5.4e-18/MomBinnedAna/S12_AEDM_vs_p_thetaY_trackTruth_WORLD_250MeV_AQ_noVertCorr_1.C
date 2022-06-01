void S12_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9979,-3.069081,3392.981,0.8953669);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[12] = {
   107.0415,
   434.1376,
   631.5016,
   875.6458,
   1124.392,
   1373.48,
   1622.531,
   1871.467,
   2120.036,
   2367.864,
   2613.349,
   2836.139};
   Double_t Graph0_fy1099[12] = {
   -1.352538,
   0.1955416,
   0.1187925,
   0.1439384,
   0.1586976,
   0.1854425,
   0.1700711,
   0.1651763,
   0.120375,
   0.1016449,
   0.0809578,
   0.06345566};
   Double_t Graph0_fex1099[12] = {
   1.218077,
   0.03919407,
   0.03259183,
   0.0311054,
   0.03118583,
   0.03195177,
   0.03349835,
   0.03596199,
   0.03978668,
   0.04580633,
   0.05663993,
   0.08215769};
   Double_t Graph0_fey1099[12] = {
   1.055801,
   0.03908394,
   0.01788468,
   0.01388958,
   0.0117178,
   0.01022261,
   0.009180617,
   0.008434529,
   0.007902605,
   0.007554495,
   0.007401974,
   0.008752556};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,0,3109.261);
   Graph_Graph01099->SetMinimum(-2.672636);
   Graph_Graph01099->SetMaximum(0.4989221);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(1,97);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
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
