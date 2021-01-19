void fit_ytot_vs_theta_3()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:41:46 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[24] = {
   0.5192355,
   0.7810348,
   1.042834,
   1.304634,
   1.566433,
   1.828232,
   2.090032,
   2.351831,
   2.613631,
   2.87543,
   3.137229,
   3.399029,
   3.660828,
   3.922627,
   4.184427,
   4.446226,
   4.708026,
   4.969825,
   5.231624,
   5.493424,
   5.755223,
   6.017023,
   6.278822,
   0.2574361};
   Double_t Graph0_fy1010[24] = {
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
   Double_t Graph0_fex1010[24] = {
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
   Double_t Graph0_fey1010[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph01003100410071010 = new TH1F("Graph_Graph_Graph_Graph_Graph01003100410071010","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph01003100410071010->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph01003100410071010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph01003100410071010);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 17.56 / 19");
   ptstats_LaTex = ptstats->AddText("p0       = 0.00459 #pm 0.001524 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.03485 #pm 0.01788 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03286 #pm 0.01776 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.02352 #pm 0.07719 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.03652 #pm 0.07832 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_31012 = new TF1("fCOD_3","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_31012->SetFillColor(19);
   fCOD_31012->SetFillStyle(0);
   fCOD_31012->SetLineColor(2);
   fCOD_31012->SetLineWidth(2);
   fCOD_31012->SetChisquare(17.55832);
   fCOD_31012->SetNDF(19);
   fCOD_31012->GetXaxis()->SetLabelFont(42);
   fCOD_31012->GetXaxis()->SetTitleOffset(1);
   fCOD_31012->GetXaxis()->SetTitleFont(42);
   fCOD_31012->GetYaxis()->SetLabelFont(42);
   fCOD_31012->GetYaxis()->SetTitleFont(42);
   fCOD_31012->SetParameter(0,0.004590463);
   fCOD_31012->SetParError(0,0.001524489);
   fCOD_31012->SetParLimits(0,0,0);
   fCOD_31012->SetParameter(1,0.03484642);
   fCOD_31012->SetParError(1,0.01788431);
   fCOD_31012->SetParLimits(1,0,0);
   fCOD_31012->SetParameter(2,-0.03286193);
   fCOD_31012->SetParError(2,0.01775546);
   fCOD_31012->SetParLimits(2,0,0);
   fCOD_31012->SetParameter(3,-0.02351726);
   fCOD_31012->SetParError(3,0.07718945);
   fCOD_31012->SetParLimits(3,0,0);
   fCOD_31012->SetParameter(4,0.03651538);
   fCOD_31012->SetParError(4,0.078317);
   fCOD_31012->SetParLimits(4,0,0);
   fCOD_31012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_31012);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
