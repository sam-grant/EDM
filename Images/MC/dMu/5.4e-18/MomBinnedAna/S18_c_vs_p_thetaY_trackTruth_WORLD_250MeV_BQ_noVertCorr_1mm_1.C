void S18_c_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8222,-1.893388,3380.472,7.22998);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[11] = {
   451.9486,
   653.1773,
   880.5114,
   1122.959,
   1370.855,
   1619.967,
   1866.721,
   2114.459,
   2363.098,
   2613.327,
   2791.578};
   Double_t Graph0_fy1131[11] = {
   5.571144,
   -0.1346506,
   -0.3461464,
   -0.3364735,
   -0.2569196,
   -0.2357782,
   -0.1990861,
   -0.1246946,
   -0.1910577,
   -0.1201097,
   0.05446588};
   Double_t Graph0_fex1131[11] = {
   0.1471548,
   0.1247107,
   0.09035711,
   0.0884312,
   0.09508117,
   0.1056574,
   0.1244836,
   0.1565771,
   0.2067098,
   0.2497165,
   0.3518313};
   Double_t Graph0_fey1131[11] = {
   0.138275,
   0.04634982,
   0.02668002,
   0.02195488,
   0.02030862,
   0.01951833,
   0.01986683,
   0.02148255,
   0.02396531,
   0.02453844,
   0.05796072};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S18_",100,217.7887,3025.942);
   Graph_Graph01131->SetMinimum(-0.981051);
   Graph_Graph01131->SetMaximum(6.317643);
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
