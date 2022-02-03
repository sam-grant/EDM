void S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.195,-4.31725e-05,3407.047,0.0001866451);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1135[11] = {
   452.0334,
   653.3342,
   880.5877,
   1123.032,
   1370.863,
   1619.695,
   1866.296,
   2115.184,
   2363.104,
   2612.119,
   2787.642};
   Double_t Graph0_fy1135[11] = {
   -6.611204e-06,
   1.812722e-07,
   2.546782e-07,
   2.520692e-07,
   3.166761e-07,
   6.406887e-07,
   9.373506e-07,
   5.863287e-07,
   1.103015e-06,
   5.806396e-06,
   4.351075e-05};
   Double_t Graph0_fex1135[11] = {
   0.1603305,
   0.1350596,
   0.09736021,
   0.09490607,
   0.1018511,
   0.1129718,
   0.1330762,
   0.1674427,
   0.2190467,
   0.2626988,
   0.3366573};
   Double_t Graph0_fey1135[11] = {
   4.617423e-06,
   3.05714e-07,
   1.029124e-07,
   9.363197e-08,
   1.160464e-07,
   1.581076e-07,
   2.601663e-07,
   5.004717e-07,
   1.0898e-06,
   2.074573e-06,
   5.387845e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1135,Graph0_fy1135,Graph0_fex1135,Graph0_fey1135);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01135 = new TH1F("Graph_Graph01135","S18_",100,218.2625,3021.59);
   Graph_Graph01135->SetMinimum(-2.019074e-05);
   Graph_Graph01135->SetMaximum(0.0001636633);
   Graph_Graph01135->SetDirectory(0);
   Graph_Graph01135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01135->SetLineColor(ci);
   Graph_Graph01135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01135->GetXaxis()->SetRange(0,101);
   Graph_Graph01135->GetXaxis()->CenterTitle(true);
   Graph_Graph01135->GetXaxis()->SetLabelFont(42);
   Graph_Graph01135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01135->GetXaxis()->SetTitleFont(42);
   Graph_Graph01135->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01135->GetYaxis()->CenterTitle(true);
   Graph_Graph01135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01135->GetYaxis()->SetLabelFont(42);
   Graph_Graph01135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01135->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01135->GetYaxis()->SetTitleFont(42);
   Graph_Graph01135->GetZaxis()->SetLabelFont(42);
   Graph_Graph01135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01135);
   
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
