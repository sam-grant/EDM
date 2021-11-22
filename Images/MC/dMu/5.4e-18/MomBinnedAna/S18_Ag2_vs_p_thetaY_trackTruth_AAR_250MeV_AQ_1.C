void S18_Ag2_vs_p_thetaY_trackTruth_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:13:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-301.4644,-1.36421,3331.568,6.26834);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[12] = {
   201.4826,
   433.6373,
   628.5893,
   873.0583,
   1121.633,
   1371.44,
   1620.022,
   1867.892,
   2115.773,
   2363.227,
   2613.952,
   2828.757};
   Double_t Graph0_fy1065[12] = {
   3.437681,
   -0.02030524,
   0.003152329,
   -0.06351795,
   0.0002502989,
   -0.006861225,
   0.006457374,
   0.03094021,
   0.0181402,
   0.0176255,
   0.05810741,
   0.0144344};
   Double_t Graph0_fex1065[12] = {
   1.86628,
   0.06961119,
   0.0636093,
   0.06389998,
   0.06862853,
   0.07422075,
   0.08181962,
   0.09423555,
   0.1140065,
   0.1472118,
   0.1894361,
   0.2470347};
   Double_t Graph0_fey1065[12] = {
   1.558567,
   0.0695048,
   0.03486363,
   0.02860031,
   0.02573488,
   0.02374671,
   0.02259501,
   0.02233649,
   0.02326597,
   0.02543931,
   0.02695162,
   0.0349595};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S18_",100,0,3091.942);
   Graph_Graph01065->SetMinimum(-0.6009549);
   Graph_Graph01065->SetMaximum(5.505085);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01065->GetXaxis()->SetRange(3,96);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
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
