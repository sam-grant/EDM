void S0S12S18_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:13:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9312,-0.001398013,3380.604,0.005852104);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[11] = {
   451.8229,
   653.3956,
   880.1993,
   1123.077,
   1371.188,
   1620.216,
   1867.292,
   2115.256,
   2363.138,
   2614.496,
   2791.826};
   Double_t Graph0_fy1218[11] = {
   -0.0001896601,
   0.001062539,
   0.001039347,
   0.001134402,
   0.001755285,
   0.001835131,
   0.002049755,
   0.001613695,
   0.001422161,
   0.002303777,
   0.003162164};
   Double_t Graph0_fex1218[11] = {
   0.08842653,
   0.07486159,
   0.05431044,
   0.05307049,
   0.05677049,
   0.06274887,
   0.07298439,
   0.09042414,
   0.1174052,
   0.1441228,
   0.1959949};
   Double_t Graph0_fey1218[11] = {
   -0.000669294,
   0.0002603618,
   0.0001774794,
   0.0001613915,
   0.0001843971,
   0.000210488,
   0.0002290542,
   0.000313016,
   0.0003797005,
   0.0004986553,
   0.001481587};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,217.7058,3026.051);
   Graph_Graph01218->SetMinimum(-0.0006730012);
   Graph_Graph01218->SetMaximum(0.005127092);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(0,100);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
