void S0_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4604,-0.03926006,3409.867,0.0351026);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[11] = {
   451.5017,
   653.2126,
   879.9286,
   1123.095,
   1371.312,
   1620.794,
   1868.128,
   2116.549,
   2363.467,
   2615.613,
   2789.755};
   Double_t Graph0_fy1071[11] = {
   0.007963511,
   0.002443722,
   0.007436231,
   0.008409743,
   0.01330655,
   0.01167513,
   0.01189289,
   0.01252793,
   0.0077988,
   0.004743332,
   -0.008085096};
   Double_t Graph0_fex1071[11] = {
   0.1864231,
   0.1583684,
   0.1154331,
   0.1128051,
   0.1201848,
   0.132627,
   0.1524343,
   0.1843167,
   0.2313112,
   0.2891107,
   0.3358942};
   Double_t Graph0_fey1071[11] = {
   0.008003807,
   0.003240618,
   0.002280786,
   0.002212053,
   0.002360102,
   0.002604489,
   0.002997467,
   0.003639917,
   0.004581886,
   0.005767252,
   -0.01559597};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S0_",100,217.4377,3023.969);
   Graph_Graph01071->SetMinimum(-0.03182379);
   Graph_Graph01071->SetMaximum(0.02766633);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01071->GetXaxis()->SetRange(0,101);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
