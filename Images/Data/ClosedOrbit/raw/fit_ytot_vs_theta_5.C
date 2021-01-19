void fit_ytot_vs_theta_5()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 18:58:37 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.8601201,-0.40625,7.741081,0.40625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[24] = {
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
   Double_t Graph0_fy1016[24] = {
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
   Double_t Graph0_fex1016[24] = {
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
   Double_t Graph0_fey1016[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 11.24 / 15");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004469 #pm 0.001529 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.0339 #pm 0.01791 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03429 #pm 0.0178 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.02149 #pm 0.07721 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.03651 #pm 0.07845 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.03554 #pm 0.1782 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.2088 #pm 0.1775 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.05662 #pm 0.3173 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.7024 #pm 0.3184 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_51018 = new TF1("fCOD_5","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_51018->SetFillColor(19);
   fCOD_51018->SetFillStyle(0);
   fCOD_51018->SetLineColor(2);
   fCOD_51018->SetLineWidth(2);
   fCOD_51018->SetChisquare(11.23714);
   fCOD_51018->SetNDF(15);
   fCOD_51018->GetXaxis()->SetLabelFont(42);
   fCOD_51018->GetXaxis()->SetTitleOffset(1);
   fCOD_51018->GetXaxis()->SetTitleFont(42);
   fCOD_51018->GetYaxis()->SetLabelFont(42);
   fCOD_51018->GetYaxis()->SetTitleFont(42);
   fCOD_51018->SetParameter(0,0.004469157);
   fCOD_51018->SetParError(0,0.001528783);
   fCOD_51018->SetParLimits(0,0,0);
   fCOD_51018->SetParameter(1,0.03390187);
   fCOD_51018->SetParError(1,0.01791423);
   fCOD_51018->SetParLimits(1,0,0);
   fCOD_51018->SetParameter(2,-0.03429199);
   fCOD_51018->SetParError(2,0.01779945);
   fCOD_51018->SetParLimits(2,0,0);
   fCOD_51018->SetParameter(3,-0.021486);
   fCOD_51018->SetParError(3,0.07721411);
   fCOD_51018->SetParLimits(3,0,0);
   fCOD_51018->SetParameter(4,0.03651304);
   fCOD_51018->SetParError(4,0.07844693);
   fCOD_51018->SetParLimits(4,0,0);
   fCOD_51018->SetParameter(5,-0.03554459);
   fCOD_51018->SetParError(5,0.1781857);
   fCOD_51018->SetParLimits(5,0,0);
   fCOD_51018->SetParameter(6,-0.2088471);
   fCOD_51018->SetParError(6,0.1775373);
   fCOD_51018->SetParLimits(6,0,0);
   fCOD_51018->SetParameter(7,0.05662014);
   fCOD_51018->SetParError(7,0.3173333);
   fCOD_51018->SetParLimits(7,0,0);
   fCOD_51018->SetParameter(8,-0.702417);
   fCOD_51018->SetParError(8,0.3184086);
   fCOD_51018->SetParLimits(8,0,0);
   fCOD_51018->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_51018);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
