void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.4976,-1.740255,3375.031,6.37246);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[11] = {
   452.0477,
   653.2775,
   880.5348,
   1123.042,
   1370.867,
   1619.751,
   1866.475,
   2115.067,
   2363.258,
   2612.125,
   2787.408};
   Double_t Graph0_fy1131[11] = {
   4.9354,
   -0.1041772,
   -0.3719163,
   -0.3298611,
   -0.2344659,
   -0.2348938,
   -0.1939494,
   -0.1191709,
   -0.1289451,
   -0.08324712,
   -0.09840012};
   Double_t Graph0_fex1131[11] = {
   0.09825481,
   0.08285797,
   0.05975239,
   0.05830994,
   0.06253833,
   0.06928603,
   0.08176643,
   0.1027071,
   0.1350528,
   0.1614991,
   0.2033584};
   Double_t Graph0_fey1131[11] = {
   0.08494033,
   0.02837614,
   0.01621964,
   0.01329505,
   0.01225738,
   0.01175455,
   0.01199104,
   0.01288134,
   0.01430549,
   0.0146916,
   0.03712389};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S18_",100,218.3832,3021.178);
   Graph_Graph01131->SetMinimum(-0.9289836);
   Graph_Graph01131->SetMaximum(5.561188);
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
