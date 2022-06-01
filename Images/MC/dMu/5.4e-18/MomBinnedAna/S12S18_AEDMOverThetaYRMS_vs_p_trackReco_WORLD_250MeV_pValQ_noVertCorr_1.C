void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5156,-0.003230096,3406.64,0.03313589);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1190[12] = {
   188.5023,
   430.658,
   629.9831,
   874.0428,
   1123.04,
   1372.476,
   1621.754,
   1870.356,
   2119.083,
   2366.832,
   2612.557,
   2826.056};
   Double_t Graph0_fy1190[12] = {
   0.01710685,
   0.003745638,
   0.004208492,
   0.006546563,
   0.008147283,
   0.0104246,
   0.01167749,
   0.0125274,
   0.0124283,
   0.01304284,
   0.01476965,
   0.009782122};
   Double_t Graph0_fex1190[12] = {
   0.3182369,
   0.03264543,
   0.0264061,
   0.0261527,
   0.0272132,
   0.02867602,
   0.03067767,
   0.03369066,
   0.03820728,
   0.04498019,
   0.05686534,
   0.07229706};
   Double_t Graph0_fey1190[12] = {
   0.009968046,
   0.0009147362,
   0.0005255518,
   0.0005128405,
   0.0005330664,
   0.0005621574,
   0.0006016309,
   0.0006610893,
   0.0007503687,
   0.0008860396,
   0.001130758,
   0.001938322};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1190,Graph0_fy1190,Graph0_fex1190,Graph0_fey1190);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01190 = new TH1F("Graph_Graph01190","S12S18_",100,0,3089.923);
   Graph_Graph01190->SetMinimum(0.0004065031);
   Graph_Graph01190->SetMaximum(0.02949929);
   Graph_Graph01190->SetDirectory(0);
   Graph_Graph01190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01190->SetLineColor(ci);
   Graph_Graph01190->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01190->GetXaxis()->SetRange(1,98);
   Graph_Graph01190->GetXaxis()->CenterTitle(true);
   Graph_Graph01190->GetXaxis()->SetLabelFont(42);
   Graph_Graph01190->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01190->GetXaxis()->SetTitleFont(42);
   Graph_Graph01190->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01190->GetYaxis()->CenterTitle(true);
   Graph_Graph01190->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01190->GetYaxis()->SetLabelFont(42);
   Graph_Graph01190->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01190->GetYaxis()->SetTitleFont(42);
   Graph_Graph01190->GetZaxis()->SetLabelFont(42);
   Graph_Graph01190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01190);
   
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
