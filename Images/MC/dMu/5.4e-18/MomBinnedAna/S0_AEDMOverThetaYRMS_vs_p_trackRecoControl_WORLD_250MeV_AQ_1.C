void S0_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.6296,-0.01016371,3035.642,-0.004297992);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[12] = {
   194.5206,
   424.1997,
   631.229,
   875.8461,
   1123.82,
   1372.921,
   1621.873,
   1870.385,
   2118.91,
   2366.693,
   2613.611,
   2826.325};
   Double_t Graph0_fy1049[12] = {
   -0.004279161,
   0.001225356,
   -0.003810404,
   -0.007199503,
   -0.006104908,
   -0.01077941,
   -0.009716238,
   -0.01197493,
   -0.01131442,
   -0.01172607,
   -0.009371579,
   -0.006085789};
   Double_t Graph0_fex1049[12] = {
   0.3667712,
   0.08181266,
   0.06309451,
   0.05917214,
   0.06008437,
   0.06234331,
   0.06617305,
   0.07215698,
   0.0822069,
   0.09740665,
   0.1222321,
   0.1544674};
   Double_t Graph0_fey1049[12] = {
   -0.01683829,
   0.00224001,
   -0.001279138,
   -0.001171828,
   -0.001177645,
   -0.00122264,
   -0.001298838,
   -0.001417119,
   -0.001617758,
   -0.001921722,
   -0.002424039,
   -0.004081352};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S0_",100,0,3089.712);
   Graph_Graph01049->SetMinimum(-0.009577142);
   Graph_Graph01049->SetMaximum(-0.004884564);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(25,90);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
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
