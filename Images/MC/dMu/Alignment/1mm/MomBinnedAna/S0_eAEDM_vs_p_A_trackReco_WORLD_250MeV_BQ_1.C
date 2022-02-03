void S0_eAEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4953,-2.377911e-05,3409.331,0.0002153086);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[11] = {
   451.3821,
   653.3903,
   879.7967,
   1123.261,
   1371.434,
   1620.943,
   1867.966,
   2116.623,
   2363.769,
   2615.976,
   2789.306};
   Double_t Graph0_fy1068[11] = {
   7.64368e-06,
   5.099389e-07,
   1.809936e-07,
   1.618206e-07,
   1.968863e-07,
   2.627733e-07,
   3.956083e-07,
   6.92161e-07,
   1.352194e-06,
   2.558579e-06,
   4.75944e-05};
   Double_t Graph0_fex1068[11] = {
   0.1884824,
   0.1599355,
   0.1164829,
   0.1138846,
   0.1213846,
   0.1341141,
   0.1537254,
   0.1860182,
   0.2335834,
   0.2922443,
   0.3358488};
   Double_t Graph0_fey1068[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S0_",100,217.3487,3023.487);
   Graph_Graph01068->SetMinimum(1.296619e-07);
   Graph_Graph01068->SetMaximum(0.0001913998);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01068->GetXaxis()->SetRange(0,101);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
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
