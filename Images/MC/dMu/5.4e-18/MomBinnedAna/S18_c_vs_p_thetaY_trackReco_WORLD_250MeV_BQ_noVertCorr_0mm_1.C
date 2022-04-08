void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.859,-1.900748,3376.397,7.293625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[11] = {
   452.0347,
   653.2816,
   880.567,
   1123.189,
   1370.963,
   1619.706,
   1866.59,
   2114.577,
   2363.22,
   2612.648,
   2788.377};
   Double_t Graph0_fy1131[11] = {
   5.623374,
   -0.03470866,
   -0.3418622,
   -0.3197064,
   -0.2356393,
   -0.1934342,
   -0.1606457,
   -0.1123218,
   -0.161165,
   -0.06846471,
   0.1086117};
   Double_t Graph0_fex1131[11] = {
   0.146182,
   0.1236488,
   0.08964578,
   0.0877033,
   0.09400192,
   0.1046896,
   0.1232978,
   0.1552484,
   0.2042927,
   0.2449465,
   0.314428};
   Double_t Graph0_fey1131[11] = {
   0.1378555,
   0.0460958,
   0.02649053,
   0.02179301,
   0.02010147,
   0.01935488,
   0.0197135,
   0.02123517,
   0.02365718,
   0.02416987,
   0.05968313};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S18_",100,218.2083,3022.372);
   Graph_Graph01131->SetMinimum(-0.981311);
   Graph_Graph01131->SetMaximum(6.374188);
   Graph_Graph01131->SetDirectory(0);
   Graph_Graph01131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01131->SetLineColor(ci);
   Graph_Graph01131->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01131->GetXaxis()->SetRange(0,100);
   Graph_Graph01131->GetXaxis()->CenterTitle(true);
   Graph_Graph01131->GetXaxis()->SetLabelFont(42);
   Graph_Graph01131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01131->GetXaxis()->SetTitleFont(42);
   Graph_Graph01131->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01131->GetYaxis()->CenterTitle(true);
   Graph_Graph01131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01131->GetYaxis()->SetLabelFont(42);
   Graph_Graph01131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01131->GetYaxis()->SetTitleFont(42);
   Graph_Graph01131->GetZaxis()->SetLabelFont(42);
   Graph_Graph01131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01131);
   
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
