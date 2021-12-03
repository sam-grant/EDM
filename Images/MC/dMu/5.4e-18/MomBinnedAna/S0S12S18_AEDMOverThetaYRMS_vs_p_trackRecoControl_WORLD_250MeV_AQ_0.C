void S0S12S18_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5144,-0.008352699,3034.923,-0.0002319977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1109[12] = {
   192.2001,
   423.448,
   631.326,
   875.8637,
   1123.741,
   1372.866,
   1621.902,
   1870.424,
   2118.826,
   2366.464,
   2613.201,
   2825.527};
   Double_t Graph0_fy1109[12] = {
   -0.01041396,
   -0.001646459,
   -0.002275908,
   -0.005057115,
   -0.005441435,
   -0.008396448,
   -0.007941092,
   -0.009428325,
   -0.006866732,
   -0.007458604,
   -0.007272794,
   -0.001278636};
   Double_t Graph0_fex1109[12] = {
   0.2040654,
   0.04760665,
   0.03659771,
   0.03433945,
   0.03488441,
   0.03624002,
   0.03844086,
   0.0419287,
   0.04784871,
   0.05675261,
   0.07178417,
   0.09115639};
   Double_t Graph0_fey1109[12] = {
   -0.009336619,
   -0.001294937,
   -0.0007423002,
   -0.0006796454,
   -0.0006843799,
   -0.0007107259,
   -0.0007547311,
   -0.0008237437,
   -0.0009407138,
   -0.00111917,
   -0.00142403,
   -0.002439209};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1109,Graph0_fy1109,Graph0_fex1109,Graph0_fey1109);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01109 = new TH1F("Graph_Graph01109","S0S12S18_",100,0,3088.981);
   Graph_Graph01109->SetMinimum(-0.007540629);
   Graph_Graph01109->SetMaximum(-0.001044068);
   Graph_Graph01109->SetDirectory(0);
   Graph_Graph01109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01109->SetLineColor(ci);
   Graph_Graph01109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01109->GetXaxis()->SetRange(25,90);
   Graph_Graph01109->GetXaxis()->CenterTitle(true);
   Graph_Graph01109->GetXaxis()->SetLabelFont(42);
   Graph_Graph01109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01109->GetXaxis()->SetTitleFont(42);
   Graph_Graph01109->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01109->GetYaxis()->CenterTitle(true);
   Graph_Graph01109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01109->GetYaxis()->SetLabelFont(42);
   Graph_Graph01109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01109->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01109->GetYaxis()->SetTitleFont(42);
   Graph_Graph01109->GetZaxis()->SetLabelFont(42);
   Graph_Graph01109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01109);
   
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
