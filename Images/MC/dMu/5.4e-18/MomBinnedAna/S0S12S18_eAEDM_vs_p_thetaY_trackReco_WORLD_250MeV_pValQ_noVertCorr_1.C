void S0S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5489,-0.03400518,3406.94,0.3683534);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1225[12] = {
   188.806,
   430.8761,
   629.9556,
   874.0595,
   1123.015,
   1372.494,
   1621.768,
   1870.362,
   2119.125,
   2366.858,
   2612.578,
   2826.342};
   Double_t Graph0_fy1225[12] = {
   0.298918,
   0.02703457,
   0.01294278,
   0.01044871,
   0.009168392,
   0.008261809,
   0.007617409,
   0.007208981,
   0.006999544,
   0.006922978,
   0.007114602,
   0.009628885};
   Double_t Graph0_fex1225[12] = {
   0.2857912,
   0.02926991,
   0.02371629,
   0.02347953,
   0.02442359,
   0.02573198,
   0.02753266,
   0.03022268,
   0.03425174,
   0.04028754,
   0.05083544,
   0.06470776};
   Double_t Graph0_fey1225[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1225,Graph0_fy1225,Graph0_fex1225,Graph0_fey1225);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01225 = new TH1F("Graph_Graph01225","S0S12S18_",100,0,3090.195);
   Graph_Graph01225->SetMinimum(0.00623068);
   Graph_Graph01225->SetMaximum(0.3281175);
   Graph_Graph01225->SetDirectory(0);
   Graph_Graph01225->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01225->SetLineColor(ci);
   Graph_Graph01225->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01225->GetXaxis()->SetRange(1,98);
   Graph_Graph01225->GetXaxis()->CenterTitle(true);
   Graph_Graph01225->GetXaxis()->SetLabelFont(42);
   Graph_Graph01225->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01225->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01225->GetXaxis()->SetTitleFont(42);
   Graph_Graph01225->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01225->GetYaxis()->CenterTitle(true);
   Graph_Graph01225->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01225->GetYaxis()->SetLabelFont(42);
   Graph_Graph01225->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01225->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01225->GetYaxis()->SetTitleFont(42);
   Graph_Graph01225->GetZaxis()->SetLabelFont(42);
   Graph_Graph01225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01225);
   
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
