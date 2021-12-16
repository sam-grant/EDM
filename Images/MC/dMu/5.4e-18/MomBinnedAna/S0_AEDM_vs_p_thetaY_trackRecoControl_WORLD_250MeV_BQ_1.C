void S0_AEDM_vs_p_thetaY_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.862,-0.3753195,3411.922,0.9329588);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[11] = {
   453.2736,
   656.6675,
   884.0536,
   1123.281,
   1363.384,
   1601.719,
   1825.372,
   2101.358,
   2414.029,
   2640.443,
   2791.648};
   Double_t Graph0_fy1058[11] = {
   0.2959936,
   0.1590742,
   0.07775756,
   0.1222185,
   0.1705736,
   0.1045934,
   0.3966871,
   -0.3090882,
   0.2345502,
   0.0437614,
   -0.02110378};
   Double_t Graph0_fex1058[11] = {
   0.2807713,
   0.2103466,
   0.1422069,
   0.130941,
   0.1513813,
   0.2158623,
   0.4409652,
   2.537895,
   1.001244,
   0.5214554,
   0.4195432};
   Double_t Graph0_fey1058[11] = {
   0.4067694,
   0.1163297,
   0.06069485,
   0.04669158,
   0.04633794,
   0.057788,
   0.1113483,
   0.4505918,
   0.1805599,
   0.06641616,
   0.09411445};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S0_",100,219.0854,3025.975);
   Graph_Graph01058->SetMinimum(-0.2444916);
   Graph_Graph01058->SetMaximum(0.802131);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->SetRange(0,101);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
