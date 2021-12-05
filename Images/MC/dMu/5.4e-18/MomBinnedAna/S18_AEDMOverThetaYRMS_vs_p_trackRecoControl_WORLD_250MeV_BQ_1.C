void S18_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:39:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.8646,-0.0680984,3028.281,0.02097178);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[11] = {
   452.9528,
   656.7601,
   885.1569,
   1123.522,
   1363.641,
   1601.139,
   1825.071,
   2101.94,
   2409.845,
   2636.475,
   2790.432};
   Double_t Graph0_fy1079[11] = {
   0.0250501,
   -0.002779007,
   -0.004827686,
   -0.004691538,
   -0.009349946,
   -0.002469445,
   0.01034413,
   -0.07458437,
   0.009020061,
   -0.0237494,
   -0.01080131};
   Double_t Graph0_fex1079[11] = {
   0.2870025,
   0.2125646,
   0.142451,
   0.1308511,
   0.1511894,
   0.2145765,
   0.4527067,
   2.643443,
   1.048101,
   0.5726681,
   0.5138775};
   Double_t Graph0_fey1079[11] = {
   0.01230454,
   -0.004429553,
   -0.00283648,
   -0.002578555,
   -0.00299666,
   -0.004430119,
   0.0106282,
   -0.04185985,
   0.02237624,
   -0.01195198,
   -0.02291193};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","S18_",100,218.8378,3024.773);
   Graph_Graph01079->SetMinimum(-0.05919138);
   Graph_Graph01079->SetMaximum(0.01206476);
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
