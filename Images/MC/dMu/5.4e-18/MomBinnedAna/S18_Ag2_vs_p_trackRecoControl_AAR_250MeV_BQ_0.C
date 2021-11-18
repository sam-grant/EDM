void S18_Ag2_vs_p_trackRecoControl_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.4358,-0.9713263,2744.124,0.5536786);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[11] = {
   452.957,
   656.7828,
   885.1468,
   1123.533,
   1363.63,
   1601.179,
   1824.969,
   2102.272,
   2409.931,
   2636.456,
   2790.376};
   Double_t Graph0_fy1047[11] = {
   -0.2266606,
   0.1836483,
   -0.1304506,
   -0.01311267,
   -0.0224433,
   0.04089875,
   0.07399787,
   -0.3693684,
   -0.1433155,
   -0.07562136,
   -0.08106707};
   Double_t Graph0_fex1047[11] = {
   0.2854872,
   0.2115621,
   0.1418664,
   0.1303305,
   0.1506567,
   0.2139366,
   0.450887,
   2.641302,
   1.044509,
   0.5721221,
   0.512281};
   Double_t Graph0_fey1047[11] = {
   0.4055611,
   0.1158628,
   0.05982758,
   0.04604762,
   0.04578506,
   0.05725016,
   0.1155272,
   0.3477903,
   0.1803012,
   0.07876842,
   0.1267536};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","S18_",100,218.8498,3024.71);
   Graph_Graph01047->SetMinimum(-0.8188258);
   Graph_Graph01047->SetMaximum(0.4011781);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01047->GetXaxis()->SetRange(19,82);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
