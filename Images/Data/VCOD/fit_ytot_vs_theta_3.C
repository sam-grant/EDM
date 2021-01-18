void fit_ytot_vs_theta_3()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 15 20:33:55 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8606656,-0.40625,7.745989,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[24] = {
   0.2617994,
   0.5235988,
   0.7853982,
   1.047198,
   1.308997,
   1.570796,
   1.832596,
   2.094395,
   2.356194,
   2.617994,
   2.879793,
   3.141593,
   3.403392,
   3.665191,
   3.926991,
   4.18879,
   4.45059,
   4.712389,
   4.974188,
   5.235988,
   5.497787,
   5.759587,
   6.021386,
   6.283185};
   Double_t Graph0_fy1012[24] = {
   0.06431844,
   0.04571288,
   0.0574694,
   0.02320447,
   0.09737396,
   -0.04730134,
   -0.07321681,
   -0.03564204,
   -0.0215555,
   -0.004939567,
   0.05522279,
   -0.02321811,
   -0.04120692,
   0.1754205,
   0.03084537,
   0.1168879,
   0.06479253,
   0.06042593,
   0.03377229,
   0.09275861,
   0.1275873,
   0.2019298,
   0.03399435,
   -0.06200423};
   Double_t Graph0_fex1012[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1012[24] = {
   0.06750719,
   0.0696,
   0.06839265,
   0.06852024,
   0.06050222,
   0.06989095,
   0.07519053,
   0.07588556,
   0.07318344,
   0.07644342,
   0.06727056,
   0.06953546,
   0.06115408,
   0.06806312,
   0.06468399,
   0.07176898,
   0.07328096,
   0.06929159,
   0.06546657,
   0.07487799,
   0.06811331,
   0.06657699,
   0.06455784,
   0.07879607};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph01005100610091012 = new TH1F("Graph_Graph_Graph_Graph_Graph01005100610091012","",100,0,6.885324);
   Graph_Graph_Graph_Graph_Graph01005100610091012->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph01005100610091012->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph01005100610091012->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph01005100610091012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph01005100610091012->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph01005100610091012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph01005100610091012);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 17.56 / 19");
   ptstats_LaTex = ptstats->AddText("p0       = 0.00459 #pm 0.001524 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02533 #pm 0.01773 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04065 #pm 0.01791 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.002493 #pm 0.07733 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04335 #pm 0.07818 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_31014 = new TF1("fCOD_3","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) )",0,6.283185, TF1::EAddToList::kNo);
   fCOD_31014->SetFillColor(19);
   fCOD_31014->SetFillStyle(0);
   fCOD_31014->SetLineColor(2);
   fCOD_31014->SetLineWidth(2);
   fCOD_31014->SetChisquare(17.55832);
   fCOD_31014->SetNDF(19);
   fCOD_31014->GetXaxis()->SetLabelFont(42);
   fCOD_31014->GetXaxis()->SetTitleOffset(1);
   fCOD_31014->GetXaxis()->SetTitleFont(42);
   fCOD_31014->GetYaxis()->SetLabelFont(42);
   fCOD_31014->GetYaxis()->SetTitleFont(42);
   fCOD_31014->SetParameter(0,0.004590484);
   fCOD_31014->SetParError(0,0.001524489);
   fCOD_31014->SetParLimits(0,0,0);
   fCOD_31014->SetParameter(1,0.0253339);
   fCOD_31014->SetParError(1,0.01772944);
   fCOD_31014->SetParLimits(1,0,0);
   fCOD_31014->SetParameter(2,-0.04064834);
   fCOD_31014->SetParError(2,0.01791011);
   fCOD_31014->SetParLimits(2,0,0);
   fCOD_31014->SetParameter(3,-0.002493055);
   fCOD_31014->SetParError(3,0.07732729);
   fCOD_31014->SetParLimits(3,0,0);
   fCOD_31014->SetParameter(4,0.04334858);
   fCOD_31014->SetParError(4,0.0781809);
   fCOD_31014->SetParLimits(4,0,0);
   fCOD_31014->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_31014);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
