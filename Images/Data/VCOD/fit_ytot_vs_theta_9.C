void fit_ytot_vs_theta_9()
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
   
   Double_t Graph0_fx1030[24] = {
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
   Double_t Graph0_fy1030[24] = {
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
   Double_t Graph0_fex1030[24] = {
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
   Double_t Graph0_fey1030[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030","",100,0,6.885324);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph01005100610091012101510181021102410271030);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 4.611 / 7");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004333 #pm 0.001532 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02234 #pm 0.01779 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.04297 #pm 0.01801 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.001905 #pm 0.07777 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04266 #pm 0.07833 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.1764 #pm 0.1801 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.1168 #pm 0.1764 ");
   ptstats_LaTex = ptstats->AddText("p7       = -0.5974 #pm 0.3206 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.3895 #pm 0.3177 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.118 #pm 0.5044 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.2282 #pm 0.4953 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.9946 #pm 0.7412 ");
   ptstats_LaTex = ptstats->AddText("p12      = 0.4713 #pm 0.6981 ");
   ptstats_LaTex = ptstats->AddText("p13      = -0.4572 #pm 0.9886 ");
   ptstats_LaTex = ptstats->AddText("p14      =  1.17 #pm 0.9718 ");
   ptstats_LaTex = ptstats->AddText("p15      = -1.665 #pm 1.288 ");
   ptstats_LaTex = ptstats->AddText("p16      = -1.029 #pm 1.273 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_91032 = new TF1("fCOD_9","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) + ([15]*cos(8*x)+[16]*sin(8*x))/(64-0.108) )",0,6.283185, TF1::EAddToList::kNo);
   fCOD_91032->SetFillColor(19);
   fCOD_91032->SetFillStyle(0);
   fCOD_91032->SetLineColor(2);
   fCOD_91032->SetLineWidth(2);
   fCOD_91032->SetChisquare(4.611387);
   fCOD_91032->SetNDF(7);
   fCOD_91032->GetXaxis()->SetLabelFont(42);
   fCOD_91032->GetXaxis()->SetTitleOffset(1);
   fCOD_91032->GetXaxis()->SetTitleFont(42);
   fCOD_91032->GetYaxis()->SetLabelFont(42);
   fCOD_91032->GetYaxis()->SetTitleFont(42);
   fCOD_91032->SetParameter(0,0.004333366);
   fCOD_91032->SetParError(0,0.001532499);
   fCOD_91032->SetParLimits(0,0,0);
   fCOD_91032->SetParameter(1,0.02234221);
   fCOD_91032->SetParError(1,0.01779089);
   fCOD_91032->SetParLimits(1,0,0);
   fCOD_91032->SetParameter(2,-0.04296761);
   fCOD_91032->SetParError(2,0.01800872);
   fCOD_91032->SetParLimits(2,0,0);
   fCOD_91032->SetParameter(3,-0.001904918);
   fCOD_91032->SetParError(3,0.07777019);
   fCOD_91032->SetParLimits(3,0,0);
   fCOD_91032->SetParameter(4,0.04265718);
   fCOD_91032->SetParError(4,0.07833222);
   fCOD_91032->SetParLimits(4,0,0);
   fCOD_91032->SetParameter(5,-0.1764495);
   fCOD_91032->SetParError(5,0.1801099);
   fCOD_91032->SetParLimits(5,0,0);
   fCOD_91032->SetParameter(6,-0.1167696);
   fCOD_91032->SetParError(6,0.1764239);
   fCOD_91032->SetParLimits(6,0,0);
   fCOD_91032->SetParameter(7,-0.597386);
   fCOD_91032->SetParError(7,0.3206098);
   fCOD_91032->SetParLimits(7,0,0);
   fCOD_91032->SetParameter(8,-0.3894662);
   fCOD_91032->SetParError(8,0.3176997);
   fCOD_91032->SetParLimits(8,0,0);
   fCOD_91032->SetParameter(9,-0.1180058);
   fCOD_91032->SetParError(9,0.5044419);
   fCOD_91032->SetParLimits(9,0,0);
   fCOD_91032->SetParameter(10,0.2281695);
   fCOD_91032->SetParError(10,0.4952602);
   fCOD_91032->SetParLimits(10,0,0);
   fCOD_91032->SetParameter(11,-0.9946399);
   fCOD_91032->SetParError(11,0.7412023);
   fCOD_91032->SetParLimits(11,0,0);
   fCOD_91032->SetParameter(12,0.471306);
   fCOD_91032->SetParError(12,0.6981057);
   fCOD_91032->SetParLimits(12,0,0);
   fCOD_91032->SetParameter(13,-0.4572283);
   fCOD_91032->SetParError(13,0.9885639);
   fCOD_91032->SetParLimits(13,0,0);
   fCOD_91032->SetParameter(14,1.170281);
   fCOD_91032->SetParError(14,0.9718488);
   fCOD_91032->SetParLimits(14,0,0);
   fCOD_91032->SetParameter(15,-1.665287);
   fCOD_91032->SetParError(15,1.288429);
   fCOD_91032->SetParLimits(15,0,0);
   fCOD_91032->SetParameter(16,-1.028929);
   fCOD_91032->SetParError(16,1.273481);
   fCOD_91032->SetParLimits(16,0,0);
   fCOD_91032->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_91032);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
