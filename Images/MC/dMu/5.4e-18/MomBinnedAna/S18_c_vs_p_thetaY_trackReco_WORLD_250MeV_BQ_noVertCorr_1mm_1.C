void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.8806,-1.901409,3375.928,7.303913);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[11] = {
   451.9235,
   653.1177,
   880.4848,
   1123.086,
   1370.894,
   1619.625,
   1866.463,
   2114.779,
   2363.232,
   2612.947,
   2788.008};
   Double_t Graph0_fy1131[11] = {
   5.643554,
   0.05638634,
   -0.2936617,
   -0.3471812,
   -0.2760456,
   -0.2341696,
   -0.1750594,
   -0.09208386,
   -0.14351,
   -0.05264044,
   0.03377154};
   Double_t Graph0_fex1131[11] = {
   0.1342794,
   0.1136836,
   0.08233015,
   0.08050679,
   0.086327,
   0.09611165,
   0.1135297,
   0.1432651,
   0.1886038,
   0.2260298,
   0.2886326};
   Double_t Graph0_fey1131[11] = {
   0.1261388,
   0.04236368,
   0.02433679,
   0.0200072,
   0.01847941,
   0.01778719,
   0.01817833,
   0.01960831,
   0.02184511,
   0.02230312,
   0.05502431};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S18_",100,218.1384,3021.947);
   Graph_Graph01131->SetMinimum(-0.9808765);
   Graph_Graph01131->SetMaximum(6.383381);
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
