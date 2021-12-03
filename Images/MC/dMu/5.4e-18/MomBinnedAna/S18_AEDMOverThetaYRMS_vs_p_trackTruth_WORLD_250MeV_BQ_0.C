void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:36:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.3247,-0.003565128,3029.676,0.03874674);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[11] = {
   452.2563,
   653.3485,
   880.6539,
   1123,
   1370.953,
   1619.754,
   1866.477,
   2115.036,
   2363.276,
   2612.101,
   2791.808};
   Double_t Graph0_fy1079[11] = {
   -0.01210628,
   0.008813022,
   0.004733875,
   0.00825635,
   0.008600133,
   0.01308282,
   0.01490418,
   0.009798116,
   0.01235535,
   0.02890266,
   0.006768267};
   Double_t Graph0_fex1079[11] = {
   0.1418602,
   0.1195276,
   0.08610237,
   0.08403905,
   0.09007355,
   0.0998744,
   0.1176515,
   0.1477227,
   0.1936415,
   0.231721,
   0.3524151};
   Double_t Graph0_fey1079[11] = {
   -0.006070172,
   0.002449753,
   0.001702853,
   0.001649075,
   0.001768419,
   0.001964926,
   0.002325875,
   0.002913563,
   0.003813296,
   0.004763869,
   0.01380446};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","S18_",100,218.1098,3026.166);
   Graph_Graph01079->SetMinimum(0.0006660593);
   Graph_Graph01079->SetMaximum(0.03451555);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01079->GetXaxis()->SetRange(19,91);
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
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
