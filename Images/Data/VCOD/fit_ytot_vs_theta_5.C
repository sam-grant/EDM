void fit_ytot_vs_theta_5()
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
   
   Double_t Graph0_fx1018[24] = {
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
   Double_t Graph0_fy1018[24] = {
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
   Double_t Graph0_fex1018[24] = {
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
   Double_t Graph0_fey1018[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018","",100,0,6.885324);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph0100510061009101210151018);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 11.24 / 15");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004469 #pm 0.001529 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02405 #pm 0.01776 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04179 #pm 0.01795 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.0007201 #pm 0.07741 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04236 #pm 0.07826 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.1712 #pm 0.1798 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.1248 #pm 0.1759 ");
   ptstats_LaTex = ptstats->AddText("p7       = -0.5729 #pm 0.3194 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.4103 #pm 0.3163 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_51020 = new TF1("fCOD_5","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) )",0,6.283185, TF1::EAddToList::kNo);
   fCOD_51020->SetFillColor(19);
   fCOD_51020->SetFillStyle(0);
   fCOD_51020->SetLineColor(2);
   fCOD_51020->SetLineWidth(2);
   fCOD_51020->SetChisquare(11.23714);
   fCOD_51020->SetNDF(15);
   fCOD_51020->GetXaxis()->SetLabelFont(42);
   fCOD_51020->GetXaxis()->SetTitleOffset(1);
   fCOD_51020->GetXaxis()->SetTitleFont(42);
   fCOD_51020->GetYaxis()->SetLabelFont(42);
   fCOD_51020->GetYaxis()->SetTitleFont(42);
   fCOD_51020->SetParameter(0,0.004469151);
   fCOD_51020->SetParError(0,0.001528783);
   fCOD_51020->SetParLimits(0,0,0);
   fCOD_51020->SetParameter(1,0.02405412);
   fCOD_51020->SetParError(1,0.01776142);
   fCOD_51020->SetParLimits(1,0,0);
   fCOD_51020->SetParameter(2,-0.04179351);
   fCOD_51020->SetParError(2,0.01795194);
   fCOD_51020->SetParLimits(2,0,0);
   fCOD_51020->SetParameter(3,-0.0007200931);
   fCOD_51020->SetParError(3,0.07740522);
   fCOD_51020->SetParLimits(3,0,0);
   fCOD_51020->SetParameter(4,0.04236028);
   fCOD_51020->SetParError(4,0.07825836);
   fCOD_51020->SetParLimits(4,0,0);
   fCOD_51020->SetParameter(5,-0.1711915);
   fCOD_51020->SetParError(5,0.1797692);
   fCOD_51020->SetParLimits(5,0,0);
   fCOD_51020->SetParameter(6,-0.1247927);
   fCOD_51020->SetParError(6,0.1759336);
   fCOD_51020->SetParLimits(6,0,0);
   fCOD_51020->SetParameter(7,-0.5729246);
   fCOD_51020->SetParError(7,0.3194328);
   fCOD_51020->SetParLimits(7,0,0);
   fCOD_51020->SetParameter(8,-0.410305);
   fCOD_51020->SetParError(8,0.3163024);
   fCOD_51020->SetParLimits(8,0,0);
   fCOD_51020->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_51020);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
