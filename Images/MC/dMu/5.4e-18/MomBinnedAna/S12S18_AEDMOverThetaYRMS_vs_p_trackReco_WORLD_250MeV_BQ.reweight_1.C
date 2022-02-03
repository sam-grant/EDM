void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1427,-0.01927713,3406.662,0.02686938);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[11] = {
   451.9338,
   653.315,
   880.4423,
   1123.086,
   1370.96,
   1619.999,
   1866.598,
   2114.954,
   2362.913,
   2613.194,
   2787.496};
   Double_t Graph0_fy1182[11] = {
   -0.0008841668,
   0.005480509,
   0.005292566,
   0.006285666,
   0.007709667,
   0.01076546,
   0.01191108,
   0.01072661,
   0.008249135,
   0.01867871,
   0.01012796};
   Double_t Graph0_fex1182[11] = {
   0.08421975,
   0.07114462,
   0.05140688,
   0.05018854,
   0.05365591,
   0.05937063,
   0.06960258,
   0.08736073,
   0.1143879,
   0.1387489,
   0.1730595};
   Double_t Graph0_fey1182[11] = {
   -0.003597122,
   0.001458619,
   0.00101651,
   0.0009858574,
   0.001054941,
   0.001167827,
   0.001374264,
   0.001721806,
   0.002253697,
   0.002829668,
   0.008368504};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,218.2676,3021.252);
   Graph_Graph01182->SetMinimum(-0.01466248);
   Graph_Graph01182->SetMaximum(0.02225473);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(0,101);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
