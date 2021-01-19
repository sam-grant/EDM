void fit_ytot_vs_theta_8()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 21:15:55 2021) by ROOT version 6.22/06
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
   -0.006562985,
   -0.06206024,
   -0.0127903,
   0.02058143,
   0.003870004,
   -0.07405092,
   -0.102477,
   -0.1174621,
   -0.03883636,
   -0.07325296,
   -0.009276232,
   -0.01217671,
   -0.004751873,
   0.1194191,
   -0.02645731,
   0.06019055,
   0.02371367,
   -0.01542529,
   0.002887453,
   0.07978954,
   0.03078049,
   0.1239876,
   0.0446683,
   -0.06959394};
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
   0.03941483,
   0.04179225,
   0.04482726,
   0.04455844,
   0.0422236,
   0.04241968,
   0.04387671,
   0.04244206,
   0.04391941,
   0.0424273,
   0.04196058,
   0.03878665,
   0.03447418,
   0.03987117,
   0.03831296,
   0.04269219,
   0.04242621,
   0.03828801,
   0.03690439,
   0.04168359,
   0.04255553,
   0.04166702,
   0.04035714,
   0.03898679};
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
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 15.73 / 9");
   ptstats_LaTex = ptstats->AddText("p0       = -0.0006356 #pm 0.0009074 ");
   ptstats_LaTex = ptstats->AddText("p1       = 0.02504 #pm 0.0105 ");
   ptstats_LaTex = ptstats->AddText("p2       = -0.0408 #pm 0.0107 ");
   ptstats_LaTex = ptstats->AddText("p3       = 0.01732 #pm 0.04642 ");
   ptstats_LaTex = ptstats->AddText("p4       = 0.04833 #pm 0.04607 ");
   ptstats_LaTex = ptstats->AddText("p5       = -0.0041 #pm 0.1057 ");
   ptstats_LaTex = ptstats->AddText("p6       = -0.3159 #pm 0.1055 ");
   ptstats_LaTex = ptstats->AddText("p7       = 0.1268 #pm 0.1895 ");
   ptstats_LaTex = ptstats->AddText("p8       = -0.4308 #pm 0.1876 ");
   ptstats_LaTex = ptstats->AddText("p9       = 0.1769 #pm 0.2958 ");
   ptstats_LaTex = ptstats->AddText("p10      = 0.03722 #pm 0.295 ");
   ptstats_LaTex = ptstats->AddText("p11      = -0.3489 #pm 0.4238 ");
   ptstats_LaTex = ptstats->AddText("p12      = -0.2003 #pm 0.4277 ");
   ptstats_LaTex = ptstats->AddText("p13      = -0.01257 #pm 0.5795 ");
   ptstats_LaTex = ptstats->AddText("p14      = -0.1014 #pm 0.5793 ");
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
   fCOD_81027->SetChisquare(15.72878);
   fCOD_81027->SetNDF(9);
   fCOD_81027->GetXaxis()->SetLabelFont(42);
   fCOD_81027->GetXaxis()->SetTitleOffset(1);
   fCOD_81027->GetXaxis()->SetTitleFont(42);
   fCOD_81027->GetYaxis()->SetLabelFont(42);
   fCOD_81027->GetYaxis()->SetTitleFont(42);
   fCOD_81027->SetParameter(0,-0.0006355663);
   fCOD_81027->SetParError(0,0.0009074162);
   fCOD_81027->SetParLimits(0,0,0);
   fCOD_81027->SetParameter(1,0.02503952);
   fCOD_81027->SetParError(1,0.01049596);
   fCOD_81027->SetParLimits(1,0,0);
   fCOD_81027->SetParameter(2,-0.04079772);
   fCOD_81027->SetParError(2,0.01069825);
   fCOD_81027->SetParLimits(2,0,0);
   fCOD_81027->SetParameter(3,0.0173238);
   fCOD_81027->SetParError(3,0.04641881);
   fCOD_81027->SetParLimits(3,0,0);
   fCOD_81027->SetParameter(4,0.04833111);
   fCOD_81027->SetParError(4,0.04607126);
   fCOD_81027->SetParLimits(4,0,0);
   fCOD_81027->SetParameter(5,-0.004100043);
   fCOD_81027->SetParError(5,0.1057375);
   fCOD_81027->SetParLimits(5,0,0);
   fCOD_81027->SetParameter(6,-0.315932);
   fCOD_81027->SetParError(6,0.105543);
   fCOD_81027->SetParLimits(6,0,0);
   fCOD_81027->SetParameter(7,0.1268091);
   fCOD_81027->SetParError(7,0.1895328);
   fCOD_81027->SetParLimits(7,0,0);
   fCOD_81027->SetParameter(8,-0.4308343);
   fCOD_81027->SetParError(8,0.1876349);
   fCOD_81027->SetParLimits(8,0,0);
   fCOD_81027->SetParameter(9,0.1768754);
   fCOD_81027->SetParError(9,0.295759);
   fCOD_81027->SetParLimits(9,0,0);
   fCOD_81027->SetParameter(10,0.03721652);
   fCOD_81027->SetParError(10,0.2950144);
   fCOD_81027->SetParLimits(10,0,0);
   fCOD_81027->SetParameter(11,-0.3488538);
   fCOD_81027->SetParError(11,0.4237759);
   fCOD_81027->SetParLimits(11,0,0);
   fCOD_81027->SetParameter(12,-0.2003227);
   fCOD_81027->SetParError(12,0.4277459);
   fCOD_81027->SetParLimits(12,0,0);
   fCOD_81027->SetParameter(13,-0.01256862);
   fCOD_81027->SetParError(13,0.5795239);
   fCOD_81027->SetParLimits(13,0,0);
   fCOD_81027->SetParameter(14,-0.101377);
   fCOD_81027->SetParError(14,0.5793004);
   fCOD_81027->SetParLimits(14,0,0);
   fCOD_81027->SetParent(gre);
   gre->GetListOfFunctions()->Add(fCOD_81027);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
