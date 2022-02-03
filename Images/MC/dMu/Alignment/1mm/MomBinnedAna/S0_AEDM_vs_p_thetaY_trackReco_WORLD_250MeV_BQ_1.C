void S0_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4953,-0.01748307,3409.331,0.3273587);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[11] = {
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
   Double_t Graph0_fy1058[11] = {
   0.1454122,
   0.1092702,
   0.1648955,
   0.1746684,
   0.2159674,
   0.1564171,
   0.168933,
   0.1390784,
   0.07246376,
   0.02008549,
   0.07029946};
   Double_t Graph0_fex1058[11] = {
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
   Double_t Graph0_fey1058[11] = {
   0.2536826,
   0.0849008,
   0.04908295,
   0.04027071,
   0.03689477,
   0.0350302,
   0.03453406,
   0.03550706,
   0.0367844,
   0.03619027,
   0.07696118};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S0_",100,217.3487,3023.487);
   Graph_Graph01058->SetMinimum(0.01700111);
   Graph_Graph01058->SetMaximum(0.2928745);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->SetRange(0,101);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
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
