void S0_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.1328,-1.5489,3409.443,0.2466514);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t Graph0_fy1057[11] = {
   -0.452327,
   0.007942204,
   0.01839377,
   0.01467048,
   0.009443758,
   0.01050368,
   0.01088541,
   -0.0002356696,
   0.009169777,
   -0.005563753,
   0.01215193};
   Double_t Graph0_fex1057[11] = {
   0.1393969,
   0.1178818,
   0.08603497,
   0.08412457,
   0.08954346,
   0.09886091,
   0.1134618,
   0.1374016,
   0.1719492,
   0.2153454,
   0.2482986};
   Double_t Graph0_fey1057[11] = {
   0.1223007,
   0.04082339,
   0.02356991,
   0.01935958,
   0.01767507,
   0.01683613,
   0.0166669,
   0.0173272,
   0.01843246,
   0.01923136,
   0.04356458};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S0_",100,217.6843,3023.626);
   Graph_Graph01057->SetMinimum(-1.369345);
   Graph_Graph01057->SetMaximum(0.0670962);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(0,101);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
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
