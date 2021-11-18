void S12_Ag2_vs_p_trackTruth_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:32:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.4117,-0.2710726,2745.391,0.7365329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[11] = {
   451.7407,
   653.3858,
   880.2538,
   1123.051,
   1371.173,
   1620.27,
   1866.763,
   2114.834,
   2362.625,
   2614.174,
   2791.873};
   Double_t Graph0_fy1037[11] = {
   0.3820918,
   0.1312209,
   -0.01048681,
   -0.03202299,
   0.0148698,
   -0.002875802,
   -0.03352051,
   0.02674738,
   0.009884614,
   0.005931831,
   -0.02967776};
   Double_t Graph0_fex1037[11] = {
   0.1410697,
   0.1188852,
   0.08610031,
   0.08408792,
   0.08950711,
   0.09889493,
   0.1153312,
   0.1440061,
   0.1882854,
   0.2316927,
   0.3300189};
   Double_t Graph0_fey1037[11] = {
   0.1865068,
   0.06303814,
   0.03602132,
   0.02959636,
   0.02701633,
   0.02585301,
   0.02611083,
   0.02783677,
   0.03089708,
   0.03206872,
   0.07346057};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12_",100,217.5394,3026.263);
   Graph_Graph01037->SetMinimum(-0.170312);
   Graph_Graph01037->SetMaximum(0.6357723);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(19,82);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
