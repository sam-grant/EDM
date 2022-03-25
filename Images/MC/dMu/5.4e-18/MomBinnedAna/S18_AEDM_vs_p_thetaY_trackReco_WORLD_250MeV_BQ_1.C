void S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.4976,-0.2177089,3375.031,0.2479016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1132[11] = {
   452.0477,
   653.2775,
   880.5348,
   1123.042,
   1370.867,
   1619.751,
   1866.475,
   2115.067,
   2363.258,
   2612.125,
   2787.408};
   Double_t Graph0_fy1132[11] = {
   -0.01999199,
   0.1302548,
   0.1233011,
   0.100437,
   0.1300486,
   0.1284941,
   0.1119603,
   0.07834204,
   0.1008692,
   0.1285463,
   0.01667397};
   Double_t Graph0_fex1132[11] = {
   0.09825481,
   0.08285797,
   0.05975239,
   0.05830994,
   0.06253833,
   0.06928603,
   0.08176643,
   0.1027071,
   0.1350528,
   0.1614991,
   0.2033584};
   Double_t Graph0_fey1132[11] = {
   0.1201151,
   0.04004514,
   0.02289759,
   0.01878744,
   0.01733422,
   0.01655755,
   0.01681518,
   0.01781477,
   0.01931658,
   0.01896503,
   0.04533156};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1132,Graph0_fy1132,Graph0_fex1132,Graph0_fey1132);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01132 = new TH1F("Graph_Graph01132","S18_",100,218.3832,3021.178);
   Graph_Graph01132->SetMinimum(-0.1711478);
   Graph_Graph01132->SetMaximum(0.2013406);
   Graph_Graph01132->SetDirectory(0);
   Graph_Graph01132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01132->SetLineColor(ci);
   Graph_Graph01132->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01132->GetXaxis()->SetRange(0,100);
   Graph_Graph01132->GetXaxis()->CenterTitle(true);
   Graph_Graph01132->GetXaxis()->SetLabelFont(42);
   Graph_Graph01132->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01132->GetXaxis()->SetTitleFont(42);
   Graph_Graph01132->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01132->GetYaxis()->CenterTitle(true);
   Graph_Graph01132->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01132->GetYaxis()->SetLabelFont(42);
   Graph_Graph01132->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01132->GetYaxis()->SetTitleFont(42);
   Graph_Graph01132->GetZaxis()->SetLabelFont(42);
   Graph_Graph01132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01132);
   
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
