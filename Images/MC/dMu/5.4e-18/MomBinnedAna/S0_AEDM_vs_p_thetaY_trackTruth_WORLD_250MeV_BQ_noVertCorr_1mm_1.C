void S0_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.6664,-0.2135646,3381.292,0.4731658);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[11] = {
   451.4174,
   653.2518,
   879.8497,
   1123.213,
   1371.554,
   1620.87,
   1868.04,
   2116.623,
   2363.729,
   2615.648,
   2792.141};
   Double_t Graph0_fy1058[11] = {
   0.1298006,
   0.1452528,
   0.165448,
   0.1912273,
   0.2061282,
   0.1690144,
   0.1841576,
   0.1478218,
   0.09767159,
   0.02030888,
   0.07580139};
   Double_t Graph0_fex1058[11] = {
   0.1706777,
   0.144373,
   0.1050449,
   0.1026952,
   0.109309,
   0.1209298,
   0.1386789,
   0.1673729,
   0.2104643,
   0.263722,
   0.3316772};
   Double_t Graph0_fey1058[11] = {
   0.2289101,
   0.07652762,
   0.04409704,
   0.03623639,
   0.03307851,
   0.03149919,
   0.0310809,
   0.03188597,
   0.03298214,
   0.03255254,
   0.06754622};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S0_",100,217.1241,3026.596);
   Graph_Graph01058->SetMinimum(-0.1448916);
   Graph_Graph01058->SetMaximum(0.4044928);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->SetRange(0,100);
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
