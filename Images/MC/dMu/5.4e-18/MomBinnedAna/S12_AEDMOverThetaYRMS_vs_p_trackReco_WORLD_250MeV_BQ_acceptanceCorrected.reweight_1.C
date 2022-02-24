void S12_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4009,-0.04110356,3406.808,0.02393554);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[11] = {
   451.7715,
   653.353,
   880.3799,
   1123.143,
   1371.135,
   1620.306,
   1866.82,
   2115,
   2362.657,
   2614.209,
   2787.525};
   Double_t Graph0_fy1108[11] = {
   -0.01058739,
   0.001345251,
   0.00426295,
   0.008597819,
   0.007573472,
   0.01331483,
   0.0143905,
   0.01452915,
   0.009216614,
   0.01227979,
   0.00262924};
   Double_t Graph0_fex1108[11] = {
   0.110052,
   0.09282319,
   0.06723869,
   0.06570592,
   0.06990737,
   0.07732767,
   0.0901305,
   0.1129323,
   0.1472837,
   0.1813638,
   0.2204805};
   Double_t Graph0_fey1108[11] = {
   -0.00531638,
   0.002023248,
   0.001358401,
   0.001296036,
   0.001376768,
   0.001520101,
   0.001775955,
   0.002225793,
   0.002905525,
   0.003678035,
   0.01066112};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S12_",100,218.053,3021.354);
   Graph_Graph01108->SetMinimum(-0.03459965);
   Graph_Graph01108->SetMaximum(0.01743163);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(0,101);
   Graph_Graph01108->GetXaxis()->CenterTitle(true);
   Graph_Graph01108->GetXaxis()->SetLabelFont(42);
   Graph_Graph01108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01108->GetXaxis()->SetTitleFont(42);
   Graph_Graph01108->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01108->GetYaxis()->CenterTitle(true);
   Graph_Graph01108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01108->GetYaxis()->SetLabelFont(42);
   Graph_Graph01108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01108->GetYaxis()->SetTitleFont(42);
   Graph_Graph01108->GetZaxis()->SetLabelFont(42);
   Graph_Graph01108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01108);
   
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
