void S12_theta_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:38:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6126,-5.796796,2723.977,57.73735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[12] = {
   175.6974,
   431.8439,
   628.5339,
   872.9366,
   1121.705,
   1371.45,
   1620.649,
   1868.435,
   2116.519,
   2362.784,
   2614.713,
   2825.506};
   Double_t Graph0_fy1038[12] = {
   46.22566,
   33.96369,
   27.91363,
   22.99666,
   19.36957,
   16.47787,
   14.13059,
   12.08141,
   10.30619,
   8.649842,
   6.678438,
   4.817466};
   Double_t Graph0_fex1038[12] = {
   1.268456,
   0.1208124,
   0.1086748,
   0.1093167,
   0.117365,
   0.126998,
   0.1395072,
   0.1594509,
   0.1910791,
   0.2419874,
   0.3185748,
   0.385685};
   Double_t Graph0_fey1038[12] = {
   0.9226696,
   0.0602178,
   0.03007355,
   0.02468769,
   0.02230047,
   0.02050483,
   0.01938687,
   0.01893685,
   0.0193907,
   0.02075419,
   0.02101177,
   0.02523791};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S12_",100,0,3091.037);
   Graph_Graph01038->SetMinimum(0.5566188);
   Graph_Graph01038->SetMaximum(51.38394);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(25,81);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
