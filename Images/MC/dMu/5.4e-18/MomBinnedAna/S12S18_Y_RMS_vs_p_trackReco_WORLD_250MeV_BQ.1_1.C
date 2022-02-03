void S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4313,9.373282,3406.974,16.27);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[11] = {
   451.7994,
   653.446,
   880.5243,
   1123.169,
   1371.058,
   1619.937,
   1866.741,
   2114.974,
   2362.685,
   2613.301,
   2787.6};
   Double_t Graph0_fy1175[11] = {
   12.97678,
   12.98372,
   12.94913,
   12.88556,
   12.78583,
   12.78534,
   12.74032,
   12.68939,
   12.65303,
   12.5777,
   12.65783};
   Double_t Graph0_fex1175[11] = {
   0.1344131,
   0.1129402,
   0.08165877,
   0.07969477,
   0.08523107,
   0.09432402,
   0.1105355,
   0.1386522,
   0.1809677,
   0.2203638,
   0.2773712};
   Double_t Graph0_fey1175[11] = {
   0.03723215,
   0.01505052,
   0.01045453,
   0.01008312,
   0.01071037,
   0.0118778,
   0.01389417,
   0.01734074,
   0.0226017,
   0.02821048,
   0.0840204};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","S12S18_",100,218.0438,3021.499);
   Graph_Graph01175->SetMinimum(10.06295);
   Graph_Graph01175->SetMaximum(15.58033);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01175->GetXaxis()->SetRange(0,101);
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
