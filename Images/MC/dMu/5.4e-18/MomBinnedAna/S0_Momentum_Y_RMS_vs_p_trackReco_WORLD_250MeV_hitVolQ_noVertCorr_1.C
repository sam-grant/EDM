void S0_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6905,11.71502,3408.214,24.91881);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[12] = {
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
   Double_t Graph0_fy1067[12] = {
   16.21215,
   14.92354,
   17.65853,
   20.16135,
   21.7421,
   22.51331,
   22.70389,
   22.33798,
   21.49376,
   19.96852,
   17.37247,
   13.94334};
   Double_t Graph0_fex1067[12] = {
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
   Double_t Graph0_fey1067[12] = {
   0.1123462,
   0.01331522,
   0.009419699,
   0.01049087,
   0.01186123,
   0.01306841,
   0.01428899,
   0.01567133,
   0.01721248,
   0.01933798,
   0.02156064,
   0.02768956};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S0_",100,0,3091.351);
   Graph_Graph01067->SetMinimum(13.03539);
   Graph_Graph01067->SetMaximum(23.59843);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01067->GetXaxis()->SetRange(1,98);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
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
