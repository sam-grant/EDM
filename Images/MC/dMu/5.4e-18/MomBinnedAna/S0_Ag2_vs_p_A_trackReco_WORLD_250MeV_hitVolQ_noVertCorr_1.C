void S0_Ag2_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6905,-0.0001475276,3408.214,3.535893e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[12] = {
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
   Double_t Graph0_fy1064[12] = {
   -5.819663e-05,
   2.504022e-07,
   -2.042277e-08,
   1.039957e-08,
   -3.689437e-08,
   2.507877e-08,
   -1.741777e-08,
   -3.55535e-08,
   -1.567447e-07,
   -2.327773e-07,
   -6.876808e-08,
   3.558543e-06};
   Double_t Graph0_fex1064[12] = {
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
   Double_t Graph0_fey1064[12] = {
   5.884988e-05,
   8.422783e-08,
   1.793896e-08,
   1.648397e-08,
   1.886094e-08,
   2.269321e-08,
   2.926855e-08,
   4.180772e-08,
   6.560313e-08,
   1.265701e-07,
   2.945185e-07,
   1.319295e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S0_",100,0,3091.351);
   Graph_Graph01064->SetMinimum(-0.0001292389);
   Graph_Graph01064->SetMaximum(1.707027e-05);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(1,98);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
