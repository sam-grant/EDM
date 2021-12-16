void S0S12S18_eAEDM_vs_p_A_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.8117,-3.380404e-05,3411.006,0.0003046202);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1216[11] = {
   453.0398,
   656.5924,
   884.5957,
   1123.442,
   1363.52,
   1601.454,
   1825.241,
   2101.269,
   2412.694,
   2638.456,
   2791.046};
   Double_t Graph0_fy1216[11] = {
   4.835763e-06,
   2.399632e-07,
   6.307479e-08,
   4.777209e-08,
   7.520227e-08,
   2.393193e-07,
   3.125344e-06,
   0.0002266756,
   2.894026e-05,
   3.89478e-06,
   2.330447e-05};
   Double_t Graph0_fex1216[11] = {
   0.1640812,
   0.1223072,
   0.08217014,
   0.07557413,
   0.08717204,
   0.1240236,
   0.2569384,
   1.477005,
   0.5957302,
   0.3195425,
   0.272602};
   Double_t Graph0_fey1216[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1216,Graph0_fy1216,Graph0_fex1216,Graph0_fey1216);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01216 = new TH1F("Graph_Graph01216","S0S12S18_",100,219.0314,3025.163);
   Graph_Graph01216->SetMinimum(3.839407e-08);
   Graph_Graph01216->SetMaximum(0.0002707778);
   Graph_Graph01216->SetDirectory(0);
   Graph_Graph01216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01216->SetLineColor(ci);
   Graph_Graph01216->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01216->GetXaxis()->SetRange(0,101);
   Graph_Graph01216->GetXaxis()->CenterTitle(true);
   Graph_Graph01216->GetXaxis()->SetLabelFont(42);
   Graph_Graph01216->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01216->GetXaxis()->SetTitleFont(42);
   Graph_Graph01216->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01216->GetYaxis()->CenterTitle(true);
   Graph_Graph01216->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01216->GetYaxis()->SetLabelFont(42);
   Graph_Graph01216->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01216->GetYaxis()->SetTitleFont(42);
   Graph_Graph01216->GetZaxis()->SetLabelFont(42);
   Graph_Graph01216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01216);
   
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
