void S12_AEDM_vs_p_thetaY_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:19:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1504,-2.468853,3334.457,1.986727);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[12] = {
   175.6974,
   431.8439,
   628.5339,
   872.9366,
   1121.705,
   1371.45,
   1620.649,
   1868.435,
   2116.519,
   2362.784,
   2614.713,
   2825.506};
   Double_t Graph0_fy1050[12] = {
   -0.2410629,
   -0.08255089,
   0.09261048,
   0.04645714,
   0.1284649,
   0.06448266,
   -0.06524324,
   0.01659703,
   0.004826834,
   0.04933179,
   -0.01030644,
   -0.0646923};
   Double_t Graph0_fex1050[12] = {
   1.268456,
   0.1208124,
   0.1086748,
   0.1093167,
   0.117365,
   0.126998,
   0.1395072,
   0.1594509,
   0.1910791,
   0.2419874,
   0.3185748,
   0.385685};
   Double_t Graph0_fey1050[12] = {
   1.485193,
   0.1207766,
   0.06027921,
   0.0494613,
   0.04475369,
   0.04107107,
   0.03893795,
   0.03795474,
   0.03878099,
   0.04136941,
   0.04209938,
   0.0500692};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S12_",100,0,3091.037);
   Graph_Graph01050->SetMinimum(-2.023295);
   Graph_Graph01050->SetMaximum(1.541169);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01050->GetXaxis()->SetRange(2,96);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
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
