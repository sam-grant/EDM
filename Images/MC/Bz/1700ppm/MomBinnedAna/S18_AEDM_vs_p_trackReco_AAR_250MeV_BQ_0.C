void S18_AEDM_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:39:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4342,-0.34882,2741.036,1.118271);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[11] = {
   451.9573,
   653.0238,
   880.3556,
   1123.064,
   1370.991,
   1620.028,
   1866.786,
   2115.026,
   2363.175,
   2612.864,
   2787.25};
   Double_t Graph0_fy1046[11] = {
   0.5507963,
   0.07705547,
   0.01446686,
   0.03509164,
   0.04773266,
   -0.01161471,
   0.1095434,
   -0.04081309,
   0.08362558,
   -0.05384988,
   0.188949};
   Double_t Graph0_fex1046[11] = {
   0.2439991,
   0.2051239,
   0.1477598,
   0.1442241,
   0.155108,
   0.1715808,
   0.2026935,
   0.2526546,
   0.3343213,
   0.4019184,
   0.507219};
   Double_t Graph0_fey1046[11] = {
   0.3229596,
   0.1076372,
   0.0617591,
   0.050749,
   0.04695771,
   0.04487253,
   0.04533789,
   0.04790253,
   0.05202333,
   0.05045489,
   0.1239269};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S18_",100,218.1089,3021.361);
   Graph_Graph01046->SetMinimum(-0.2021108);
   Graph_Graph01046->SetMaximum(0.971562);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(19,82);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
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
