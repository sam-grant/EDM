void fit_ytot_vs_theta_8()
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
   
   Double_t Graph0_fx1025[24] = {
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
   Double_t Graph0_fy1025[24] = {
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
   Double_t Graph0_fex1025[24] = {
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
   Double_t Graph0_fey1025[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [rad];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025","",100,0,6.880961);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->SetMinimum(-0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->SetMaximum(0.325);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->SetTitle("#theta [rad]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph0100310041007101010131016101910221025);
   
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.735,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 6.931 / 9");
   ptstats_LaTex = ptstats->AddText("p0       = 0.004358 #pm 0.001532 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.03299 #pm 0.01794 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.03473 #pm 0.01783 ");
   ptstats_LaTex = ptstats->AddText("p3       = -0.01929 #pm 0.07756 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.03854 #pm 0.07847 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.04217 #pm 0.1785 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.2087 #pm 0.1781 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.05667 #pm 0.3178 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.703 #pm 0.3193 ");
   ptstats_LaTex = ptstats->AddText("p9       = -0.2351 #pm 0.4952 ");
   ptstats_LaTex = ptstats->AddText("p10      = -0.01196 #pm 0.5032 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.5118 #pm 0.6975 ");
   ptstats_LaTex = ptstats->AddText("p12      = -0.993 #pm 0.7408 ");
   ptstats_LaTex = ptstats->AddText("p13      = -1.015 #pm 0.9725 ");
   ptstats_LaTex = ptstats->AddText("p14      = -0.7167 #pm 0.9877 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(20222);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   
   TF1 *fCOD_81027 = new TF1("fCOD_8","( ([0]/0.108) +  ([1]*cos(x)+[2]*sin(x))/(1-0.108) + ([3]*cos(2*x)+[4]*sin(2*x))/(4-0.108) + ([5]*cos(3*x)+[6]*sin(3*x))/(9-0.108) + ([7]*cos(4*x)+[8]*sin(4*x))/(16-0.108) + ([9]*cos(5*x)+[10]*sin(5*x))/(25-0.108) + ([11]*cos(6*x)+[12]*sin(6*x))/(36-0.108) + ([13]*cos(7*x)+[14]*sin(7*x))/(49-0.108) )",0.2574361,6.278822, TF1::EAddToList::kNo);
   fCOD_81027->SetFillColor(19);
   fCOD_81027->SetFillStyle(0);
   fCOD_81027->SetLineColor(2);
   fCOD_81027->SetLineWidth(2);
   fCOD_81027->SetChisquare(6.930678);
   fCOD_81027->SetNDF(9);
   fCOD_81027->GetXaxis()->SetLabelFont(42);
   fCOD_81027->GetXaxis()->SetTitleOffset(1);
   fCOD_81027->GetXaxis()->SetTitleFont(42);
   fCOD_81027->GetYaxis()->SetLabelFont(42);
   fCOD_81027->GetYaxis()->SetTitleFont(42);
   fCOD_81027->SetParameter(0,0.004357828);
   fCOD_81027->SetParError(0,0.001532353);
   fCOD_81027->SetParLimits(0,0,0);
   fCOD_81027->SetParameter(1,0.03299147);
   fCOD_81027->SetParError(1,0.01794027);
   fCOD_81027->SetParLimits(1,0,0);
   fCOD_81027->SetParameter(2,-0.03473391);
   fCOD_81027->SetParError(2,0.01782838);
   fCOD_81027->SetParLimits(2,0,0);
   fCOD_81027->SetParameter(3,-0.01929424);
   fCOD_81027->SetParError(3,0.07755966);
   fCOD_81027->SetParLimits(3,0,0);
   fCOD_81027->SetParameter(4,0.03854364);
   fCOD_81027->SetParError(4,0.07847175);
   fCOD_81027->SetParLimits(4,0,0);
   fCOD_81027->SetParameter(5,-0.04217157);
   fCOD_81027->SetParError(5,0.1784546);
   fCOD_81027->SetParLimits(5,0,0);
   fCOD_81027->SetParameter(6,-0.2087083);
   fCOD_81027->SetParError(6,0.1780656);
   fCOD_81027->SetParLimits(6,0,0);
   fCOD_81027->SetParameter(7,0.05666708);
   fCOD_81027->SetParError(7,0.3177989);
   fCOD_81027->SetParLimits(7,0,0);
   fCOD_81027->SetParameter(8,-0.7030111);
   fCOD_81027->SetParError(8,0.3193336);
   fCOD_81027->SetParLimits(8,0,0);
   fCOD_81027->SetParameter(9,-0.2351466);
   fCOD_81027->SetParError(9,0.4952261);
   fCOD_81027->SetParLimits(9,0,0);
   fCOD_81027->SetParameter(10,-0.01196077);
   fCOD_81027->SetParError(10,0.5032336);
   fCOD_81027->SetParLimits(10,0,0);
   fCOD_81027->SetParameter(11,-0.5118162);
   fCOD_81027->SetParError(11,0.6975136);
   fCOD_81027->SetParLimits(11,0,0);
   fCOD_81027->SetParameter(12,-0.9929839);
   fCOD_81027->SetParError(12,0.740787);
   fCOD_81027->SetParLimits(12,0,0);
   fCOD_81027->SetParameter(13,-1.014714);
   fCOD_81027->SetParError(13,0.97248);
   fCOD_81027->SetParLimits(13,0,0);
   fCOD_81027->SetParameter(14,-0.7167129);
   fCOD_81027->SetParError(14,0.9877455);
   fCOD_81027->SetParLimits(14,0,0);
   fCOD_81027->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_81027);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
