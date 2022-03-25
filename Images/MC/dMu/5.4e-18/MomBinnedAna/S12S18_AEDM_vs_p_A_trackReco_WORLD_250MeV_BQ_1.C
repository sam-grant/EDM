void S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.655,-2.449131e-06,3375.214,9.697896e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[11] = {
   451.9205,
   653.3256,
   880.4131,
   1123.111,
   1371.001,
   1620.004,
   1866.718,
   2115.057,
   2362.933,
   2613.244,
   2787.597};
   Double_t Graph0_fy1172[11] = {
   -5.926388e-08,
   6.311519e-08,
   3.794301e-08,
   4.487644e-08,
   7.616549e-08,
   1.164953e-07,
   1.805709e-07,
   2.907185e-07,
   3.793792e-07,
   9.611222e-07,
   3.675271e-06};
   Double_t Graph0_fex1172[11] = {
   0.06923884,
   0.05844202,
   0.04224623,
   0.04125547,
   0.04409091,
   0.04876799,
   0.057231,
   0.07179153,
   0.09404302,
   0.1141166,
   0.1415717};
   Double_t Graph0_fey1172[11] = {
   3.653629e-07,
   2.485484e-08,
   8.418873e-09,
   7.689987e-09,
   9.423095e-09,
   1.275695e-08,
   2.052609e-08,
   3.956034e-08,
   8.607744e-08,
   1.619451e-07,
   3.99812e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18_",100,218.2625,3021.327);
   Graph_Graph01172->SetMinimum(-1.234429e-06);
   Graph_Graph01172->SetMaximum(8.483193e-06);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(0,100);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
