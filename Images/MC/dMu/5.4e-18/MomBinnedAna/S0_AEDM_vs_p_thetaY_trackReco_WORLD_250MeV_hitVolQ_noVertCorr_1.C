void S0_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6905,-2.936798,3408.214,0.8955363);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1060[12] = {
   186.2273,
   432.2067,
   629.2651,
   873.9168,
   1122.437,
   1372.126,
   1621.121,
   1870.005,
   2118.739,
   2365.057,
   2614.792,
   2827.064};
   Double_t Graph0_fy1060[12] = {
   -1.649752,
   0.06158947,
   0.1803119,
   0.2326261,
   0.1714284,
   0.205708,
   0.1706732,
   0.1680915,
   0.1509123,
   0.1096581,
   0.06002558,
   0.03835507};
   Double_t Graph0_fex1060[12] = {
   0.408042,
   0.06172949,
   0.053827,
   0.05299562,
   0.0555768,
   0.05908211,
   0.06403519,
   0.0713159,
   0.08123431,
   0.09781749,
   0.1254996,
   0.1478752};
   Double_t Graph0_fey1060[12] = {
   0.6483235,
   0.06108646,
   0.03009722,
   0.02418783,
   0.02134383,
   0.01928131,
   0.01787917,
   0.01700671,
   0.01648475,
   0.01659165,
   0.01676658,
   0.01988422};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1060,Graph0_fy1060,Graph0_fex1060,Graph0_fey1060);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01060 = new TH1F("Graph_Graph01060","S0_",100,0,3091.351);
   Graph_Graph01060->SetMinimum(-2.553565);
   Graph_Graph01060->SetMaximum(0.5123029);
   Graph_Graph01060->SetDirectory(0);
   Graph_Graph01060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01060->SetLineColor(ci);
   Graph_Graph01060->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01060->GetXaxis()->SetRange(1,98);
   Graph_Graph01060->GetXaxis()->CenterTitle(true);
   Graph_Graph01060->GetXaxis()->SetLabelFont(42);
   Graph_Graph01060->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01060->GetXaxis()->SetTitleFont(42);
   Graph_Graph01060->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01060->GetYaxis()->CenterTitle(true);
   Graph_Graph01060->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01060->GetYaxis()->SetLabelFont(42);
   Graph_Graph01060->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01060->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01060->GetYaxis()->SetTitleFont(42);
   Graph_Graph01060->GetZaxis()->SetLabelFont(42);
   Graph_Graph01060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01060);
   
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
